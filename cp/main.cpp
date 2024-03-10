#include "./src/parserIni.h"
#include "./src/dag.h"

int main()
{

    DAG_J graph;
    graph.createDAG("Make.ini");
    graph.printDAG();

    return 0;
}