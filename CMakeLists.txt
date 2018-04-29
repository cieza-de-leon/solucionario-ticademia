cmake_minimum_required(VERSION 3.10)
project(solucionario_ticademia C)

set(CMAKE_C_STANDARD 11)

add_executable(solucionario solucionario.c funciones_auxiliares.h funciones_auxiliares.c modulos/modulo_1.h modulos/modulo_1.c)
