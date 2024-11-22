#include <stdio.h>
#include "Ej_C/Materias/materias.h"
#include "Ej_C/Estudiante/estudiante.h"
#include "Ej_C/Asistencia/asistencia.h"

int main() {
    Estudiante estudiante;
    char nombre[50];  // Variable para almacenar el nombre

    // Pedir el nombre del estudiante por consola
    printf("Ingrese el nombre del estudiante: ");
    scanf("%49s", nombre);  // Capturar el nombre, máximo 49 caracteres

    // Inicializar al estudiante
    inicializarEstudiante(&estudiante, nombre, 20, 8.5);

    // Gestión de materias
    agregarMateria(&estudiante.materias, "Matemáticas");
    agregarMateria(&estudiante.materias, "Historia");

    // Registrar asistencia
    registrarAsistencia(&estudiante.asistencias, "19-11-2024", "Matemáticas", "Asistió");
    registrarAsistencia(&estudiante.asistencias, "20-11-2024", "Historia", "Falta");

    // Mostrar datos
    mostrarEstudiante(&estudiante);

    return 0;
}