#include <iostream>
#include <fstream>
#include "graph/GraphGenerator.h"
#include "graph/Graph.h"
#include "solvers/DijkstraSolver.h"

int main() {
    std::ifstream file("../tests/test3.txt");
    if (!file) {
        std::cout << "Não foi possível abrir o arquivo.";
        return 1;
    }

    GraphGenerator graphGen;
    Graph graph = graphGen.createGraph(file);
    graph.print();

    DijkstraSolver dj;
    dj.solve(graph);

    return 0;
}