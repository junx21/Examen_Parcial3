#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H


#include "../Asistencia/Asistencia.h"
#include "../Materias/Materias.h"


typedef struct {
    char nombre[50];
    int edad;
    float promedio;
    Materias materias;
    Asistencias asistencias;
} Estudiante;

void inicializarEstudiante(Estudiante* est, const char* nombre, int edad, float promedio);
void mostrarEstudiante(const Estudiante* est);

#endif