cmake_minimum_required(VERSION 3.12)
project(Cinematica VERSION 0.1.0 LANGUAGES CXX)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Crear la biblioteca "cinematica" utilizando los ficheros fuente en src
add_library(cinematica
    src/vector2d.cpp
    src/particula.cpp
    src/matematicas.cpp
)

# Ejecutable testmua
add_executable(testmua src/testmua.cpp)
target_link_libraries(testmua cinematica)

# Ejecutable testmru
add_executable(testmru src/testmru.cpp)
target_link_libraries(testmru cinematica)

# Ejecutable testvector
add_executable(testvector src/testvector.cpp)
target_link_libraries(testvector cinematica)

# Ejecutable testparticula
add_executable(testparticula src/testparticula.cpp)
target_link_libraries(testparticula cinematica)