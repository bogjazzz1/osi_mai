#include <stdio.h>
#include <dlfcn.h>
#include <stddef.h>
#include <stdbool.h>


const char* list_library_paths[2] = {"./libs/libfirstLib.so", "./libs/libsecondLib.so"};

void* init_library(const char* name_library) {

    return dlopen(name_library, RTLD_LAZY);
}

int current_library = 1;

void* list_hdl[2];


int (*GCF) (int, int);
double (*calculating_e) (int);
  
void init_funtions(){

    GCF = (int(*)(int,int))dlsym(list_hdl[current_library - 1], "GCF");
    
    calculating_e = (double(*)(int))dlsym(list_hdl[current_library - 1], "calculating_e");
}

void library_swap(){
    if(current_library == 1){
        current_library = 2;
        init_funtions();
        return;
    }

    current_library = 1;
    init_funtions();
}

int main(){

    list_hdl[0] = init_library(list_library_paths[0]);
    list_hdl[1] = init_library(list_library_paths[1]);

    init_funtions();

    int command;

    printf("Введи 0 для смены библиотеки, 1 - для запуска первой функции, 2 - для запуска второй, -1 для завершения программы.\n");
    while(scanf("%d", &command) != EOF){
        if(command == 0){
            library_swap();
            printf("%s %d \n", "Текущая библиотека: ", current_library);
        }
        else if(command == 1){
            printf("%s \n", "Введи через пробел 2 числа, для которых ты хочешь найти НОД.");
            int a, b;
            int result;

            scanf("%d", &a);
            scanf("%d", &b);

            result = GCF(a, b);

            printf("НОД = %d \n", result);
        }
        else if(command == 2){
            printf("%s \n", "Введи целое число для вычисления числа 'e', чем больше число, тем больше точность.");
            int x;
            double result;
            scanf("%d", &x);
            result = calculating_e(x);
            printf("Число 'e' = %f \n", result);
        }
        else if(command == -1){
            printf("%s \n", "Программа завершена.");
            break;
        }
        else{
            printf("Введи 0 для смены библиотеки, 1 - для запуска первой функции, 2 - для запуска второй, -1 для завершения программы.\n");
        }
    }

}