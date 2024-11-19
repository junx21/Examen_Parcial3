#include "registro_asistencias.h"
#include "../Estudiante/estudiante.h"
#include <iostream>
#include <regex>

void registroDeAsistencias() {
    try {
        Estudiante estudiante("Carlos López", 21, 7.8);
        
        auto registrarAsistencia = [&](const std::string& fecha, const std::string& materia, const std::string& estado) {
            // Validar formato de fecha (YYYY-MM-DD)
            std::regex fecha_regex("\\d{4}-\\d{2}-\\d{2}");
            if (!std::regex_match(fecha, fecha_regex)) {
                throw FechaInvalidaException();
            }
            estudiante.asistencias.push_back(fecha + " - " + materia + " - " + estado);
        };
        
        registrarAsistencia("2023-11-19", "Matemáticas", "Asistió");
        registrarAsistencia("2023-11-20", "Física", "Falta");
        
        std::cout << "Registro de asistencias:" << std::endl;
        for (const auto& asistencia : estudiante.asistencias) {
            std::cout << asistencia << std::endl;
        }
        
        // Intentar registrar una asistencia con fecha inválida
        registrarAsistencia("2023-11-", "Química", "Tardanza");
    } catch (const FechaInvalidaException& e) {
        std::cerr << "Error en registroDeAsistencias: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error inesperado en registroDeAsistencias: " << e.what() << std::endl;
    }
}