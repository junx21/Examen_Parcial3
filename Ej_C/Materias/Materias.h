#ifndef MATERIAS_H
#define MATERIAS_H

#define MAX_MATERIAS 10

typedef struct {
    char lista[MAX_MATERIAS][50];
    int numMaterias;
} Materias;

void inicializarMaterias(Materias* materias);
void agregarMateria(Materias* materias, const char* materia);
void mostrarMaterias(const Materias* materias);

#endif