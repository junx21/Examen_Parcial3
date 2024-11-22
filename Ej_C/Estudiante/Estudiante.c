#include "estudiante.h"
#include <stdio.h>
#include <string.h>

void inicializarEstudiante(Estudiante* est, const char* nombre, int edad, float promedio) {
    strcpy(est->nombre, nombre);  // Copiar el nombre ingresado
    est->edad = edad;
    est->promedio = promedio;
    inicializarMaterias(&est->materias);
    inicializarAsistencias(&est->asistencias);
}

void mostrarEstudiante(const Estudiante* est) {
    printf("Nombre: %s\n", est->nombre);
    printf("Edad: %d\n", est->edad);
    printf("Promedio: %.2f\n", est->promedio);
    mostrarMaterias(&est->materias);
    mostrarAsistencias(&est->asistencias);
}
