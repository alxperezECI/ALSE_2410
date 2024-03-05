cmake_minimum_required(VERSION 2.8)

project(fig_geometricas_file)
add_executable(${PROJECT_NAME} "main.cpp" "Circulo.h" "Circulo.cpp" "Cuadrado.h" "Cuadrado.cpp"
    "Triangulo.h" "Triangulo.cpp" "Pentagono.h" "Pentagono.cpp" "Geometrica.h" "Geometrica.cpp")
