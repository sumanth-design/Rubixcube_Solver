#include <iostream>
#include <vector>

#include "Model/RubiksCubeBitboard.h"
#include "Solver/IDDFSSolver.h"

int main() {
    RubiksCubeBitboard cube;
    const auto scrambleMoves = cube.randomShuffleCube(3);

    std::cout << "Scramble: ";
    for (const auto move : scrambleMoves) {
        std::cout << RubiksCube::getMove(move) << ' ';
    }
    std::cout << "\n";

    IDDFSSolver<RubiksCubeBitboard, HashBitboard> solver(cube, 3);
    const auto solutionMoves = solver.solve();

    std::cout << "Solution: ";
    for (const auto move : solutionMoves) {
        std::cout << RubiksCube::getMove(move) << ' ';
    }
    std::cout << "\n";
    solver.rubiksCube.print();
    return 0;
}
