#include "gestion_materias.h"
#include "../Estudiante/estudiante.h"
#include <iostream>
#include <algorithm>

void gestionDeMaterias() {
    // Se asume que se ha pedido el nombre en estructuraDelEstudiante()
    // y que se puede usar un nombre predeterminado o pedirlo aquí nuevamente.

    // Pedir el nombre nuevamente o usar un valor predeterminado
    std::string nombre = "María García"; // Cambia esto si quieres pedirlo aquí también

    try {
        Estudiante estudiante(nombre, 22, 9.0); // Edad y promedio como ejemplo

        estudiante.materias.push_back("Matemáticas");
        estudiante.materias.push_back("Física");

        std::cout << "Materias inscritas:" << std::endl;
        for (const auto& materia : estudiante.materias) {
            std::cout << "- " << materia << std::endl;
        }

        // Intentar eliminar una materia existente
        auto it = std::find(estudiante.materias.begin(), estudiante.materias.end(), "Física");
        if (it != estudiante.materias.end()) {
            estudiante.materias.erase(it);
            std::cout << "Materia 'Física' eliminada." << std::endl;
        } else {
            throw MateriaNoEncontradaException();
        }

    } catch (const MateriaNoEncontradaException& e) {
        std::cerr << "Error en gestionDeMaterias: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error inesperado en gestionDeMaterias: " << e.what() << std::endl;
    }
}