cmake_minimum_required(VERSION 3.29)

project(Examen_Parcial3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Examen_Parcial3
        main.c
        Ej_C/Asistencia/Asistencia.c
        Ej_C/Estudiante/Estudiante.c
        Ej_C/Materias/Materias.c
        Ej_C/Estudiante/Estudiante.h
)
include_directories(${CMAKE_SOURCE_DIR}/Ej_C/Asistencia)
include_directories(${CMAKE_SOURCE_DIR}/Ej_C/Materias)
