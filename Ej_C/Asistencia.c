#include "asistencia.h"
#include <stdio.h>
#include <string.h>

void inicializarAsistencias(Asistencias* asistencias) {
    asistencias->numAsistencias = 0;
}

void registrarAsistencia(Asistencias* asistencias, const char* fecha, const char* materia, const char* estado) {

        if (asistencias->numAsistencias < MAX_ASISTENCIAS) {
            strcpy(asistencias->lista[asistencias->numAsistencias].fecha, fecha);
            strcpy(asistencias->lista[asistencias->numAsistencias].materia, materia);
            strcpy(asistencias->lista[asistencias->numAsistencias].estado, estado);
            asistencias->numAsistencias++;
        } else {
            printf("No se pueden registrar más asistencias.\n");
        }

}

void mostrarAsistencias(const Asistencias* asistencias) {
    printf("Asistencias:\n");
    for (int i = 0; i < asistencias->numAsistencias; i++) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n",
               asistencias->lista[i].fecha,
               asistencias->lista[i].materia,
               asistencias->lista[i].estado);
    }
}
