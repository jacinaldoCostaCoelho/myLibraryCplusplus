cmake_minimum_required(VERSION 3.17)
project(myLibraryCplusplus)
set(CMAKE_CXX_STANDARD 14)
include_directories( https://github.com/jacinaldoCostaCoelho/myLibraryCplusplus.git )
add_executable(myLibraryCplusplus
        ArquivoEntradaDados
        ArquivoSalvaDados
        ErrosFiles
        main.cpp
        Math.cpp
        Math.h
        README.md
        Teste.cpp
        Teste.h
        Validation.cpp
        Validation.h )
