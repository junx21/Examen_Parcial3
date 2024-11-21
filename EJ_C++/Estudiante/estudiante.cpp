#include "estudiante.h"
#include <iostream>

Estudiante::Estudiante(const std::string& nombre, int edad, float promedio)
    : nombre(nombre), edad(edad), promedio(promedio) {}

void estructuraDelEstudiante() {
    std::string nombre;
    std::cout << "Por favor, introduce el nombre del estudiante: ";
    std::getline(std::cin, nombre);

    try {
        Estudiante estudiante(nombre, 20, 8.5); // Edad y promedio como ejemplo
        std::cout << "Estructura del Estudiante:" << std::endl;
        std::cout << "Nombre: " << estudiante.nombre << std::endl;
        std::cout << "Edad: " << estudiante.edad << std::endl;
        std::cout << "Promedio: " << estudiante.promedio << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error en estructuraDelEstudiante: " << e.what() << std::endl;
    }
}