#include "materias.h"
#include <stdio.h>
#include <string.h>

void inicializarMaterias(Materias* materias) {
    materias->numMaterias = 0;
}

void agregarMateria(Materias* materias, const char* materia) {
    if (materias->numMaterias < MAX_MATERIAS) {
        strcpy(materias->lista[materias->numMaterias], materia);
        materias->numMaterias++;
    } else {
        printf("No se pueden agregar más materias.\n");
    }
}

void mostrarMaterias(const Materias* materias) {
    printf("Materias:\n");
    for (int i = 0; i < materias->numMaterias; i++) {
        printf("- %s\n", materias->lista[i]);
    }
}