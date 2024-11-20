#include <stdio.h>
#include "../Ej_C/Materias/materias.h"
#include "../Ej_C/Estudiante/estudiante.h"
#include "../Ej_C/Asistencia/asistencia.h"

int main() {
    Estudiante estudiante;

    // Inicializar al estudiante
    inicializarEstudiante(&estudiante, "Juan Perez", 20, 8.5);

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