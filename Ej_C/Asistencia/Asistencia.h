#ifndef ASISTENCIA_H
#define ASISTENCIA_H

#define MAX_ASISTENCIAS 100

typedef struct {
    char fecha[11];
    char materia[50];
    char estado[10];
} RegistroAsistencia;

typedef struct {
    RegistroAsistencia lista[MAX_ASISTENCIAS];
    int numAsistencias;
} Asistencias;

void inicializarAsistencias(Asistencias* asistencias);
void registrarAsistencia(Asistencias* asistencias, const char* fecha, const char* materia, const char* estado);
void mostrarAsistencias(const Asistencias* asistencias);

#endif