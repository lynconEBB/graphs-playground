#ifndef GRAPHS_DFSSOLVER_H
#define GRAPHS_DFSSOLVER_H
#include "Solver.h"
#include <vector>

enum class Color;

class DFSSolver : public Solver
{
public:
    void solve(Graph graph) override;
    bool validate(Graph graph) override;

private:
    void visit(uint32_t index);

private:
    std::list<uint32_t> visits;
    std::vector<Color> colors;
    Graph currentGraph;
};

#endif
