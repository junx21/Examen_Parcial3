#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include <vector>
#include <stdexcept>

// Excepciones personalizadas
class MateriaNoEncontradaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "La materia especificada no fue encontrada.";
    }
};

class FechaInvalidaException : public std::exception {
public:
    const char* what() const noexcept override {
        return "El formato de la fecha es inválido.";
    }
};

// Estructura del Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
    std::vector<std::string> materias;
    std::vector<std::string> asistencias;

    Estudiante(const std::string& nombre, int edad, float promedio);
};

// Función para mostrar la estructura del estudiante
void estructuraDelEstudiante();

#endif // ESTUDIANTE_H