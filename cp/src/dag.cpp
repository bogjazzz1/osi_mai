#include "./dag.h"



void DAG_J::createDAG(std::string fileName)
{
    _jobs.returnResultParsing(fileName);
    std::vector<Job> vecJobs = _jobs.getParserRes();

    for (const auto& job : vecJobs) {
        UJob ujob;
        ujob.j = job;
        _graph.push_back(ujob);
    }   

    

    for (size_t i = 0; i < _graph.size(); ++i) {
        for (const auto& dep : _graph[i].j.dependencies) {
            // Находим индекс задачи, от которой зависит текущая задача
            auto it = std::find_if(_graph.begin(), _graph.end(), [&dep](const UJob& uj) {
                return uj.j.name == dep;
            });

            if (it != _graph.end()) {
                _graph[i].dep.push_back(std::distance(_graph.begin(), it));
            }
        }
    }    
}

void DAG_J::printDAG()
{
    if (_graph.size() == 0) {
        std::perror("Error! graph is empty");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < _graph.size(); ++i) {
        if (_graph[i].dep.size() == 0) {
            std::cout << _graph[i].j.name << " " << '\t';
        } else {
            std::cout << _graph[i].j.name << " " << " : ";
            for (size_t j = 0; j < _graph[i].dep.size(); ++j) {
                std::cout << _graph[i].dep[j] << " ";
            }
            std::cout << ";\t";
        }
    }
}

bool DAG_J::hasCycle() {
    std::vector<bool> visited(_graph.size(), false);
    std::vector<bool> recStack(_graph.size(), false);

    for (size_t i = 0; i < _graph.size(); ++i) {
        if (!visited[i] && hasCycleUtil(i, visited, recStack)) {
            std::cout << "В вашем графе найден цикл, пожалуйста, исправьте его!" << std::endl;
            return true; // Найден цикл
        }
    }

    return false; // Цикл не найден
}

bool DAG_J::hasCycleUtil(int v, std::vector<bool>& visited, std::vector<bool>& recStack) {
    if (!visited[v]) {
        visited[v] = true;
        recStack[v] = true;

        for (const auto& adj : _graph[v].dep) {
            if (!visited[adj] && hasCycleUtil(adj, visited, recStack)) {
                return true;
            } else if (recStack[adj]) {
                return true;
            }
        }
    }

    recStack[v] = false; // Убираем вершину из стека рекурсии
    return false;
}


void DAG_J::executeJob(int jobIndex, std::string mtxNameLock) {
    std::string compileCommand = _graph[jobIndex].j.command;

    if (!compileCommand.empty()) {
        std::cout << "Выполнение команды: " << compileCommand << std::endl;

        // Выполняем команду в процессе-потомке
        FILE* pipe = popen(compileCommand.c_str(), "r");
        if (pipe) {
            pclose(pipe);
        } else {
            std::cout << "Ошибка при выполнении команды компиляции." << std::endl;
            exit(EXIT_FAILURE);
        }
    } else {
        std::cout << "Команда компиляции для джобы не найдена." << std::endl;
        exit(EXIT_FAILURE);
    }
}