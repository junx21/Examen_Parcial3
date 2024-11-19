#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "materias.h"
#include "asistencia.h"

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

