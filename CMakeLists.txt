cmake_minimum_required(VERSION 4.0)
project(Rubixcubesolver)

set(CMAKE_CXX_STANDARD 20)

add_executable(Rubixcubesolver main.cpp
        Model/RubiksCube.cpp
        Model/RubiksCube.h
        Model/RubiksCube1dArray.cpp
        Model/RubiksCube3dArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/BFSSolver.h
        Solver/DFSSolver.h
        Solver/IDDFSSolver.h
        Solver/IDAstarSolver.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/NibbleArray.h)
