# cmake_minimum_required(VERSION <specify CMake version here>)
project(Matrice_mostenire)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ".")

add_executable(Matrice_mostenire main.cpp Vector.h Vector.cpp Matrice.h Matrice.cpp Matrice_oarecare.h Matrice_oarecare.cpp Matrice_patratica.h Matrice_patratica.cpp)