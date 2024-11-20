# Link del Repositorio:


https://github.com/junx21/Examen_Parcial3.git


# Enunciados 

Parte 1: Preguntas de elección múltiple (20%)

¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?

a) C utiliza cout y cin mientras que C++ utiliza printf y scanf.

b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin.

c) No hay ninguna diferencia.

d) C++ utiliza printf y scanf mientras que C utiliza std::cout y std::cin.

### La respuesta correcta es la B
¿Qué es un espacio de nombres en C++?

a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

b) Una manera de definir variables.

c) Una función de la biblioteca estándar.

d) Un tipo de ciclo en C++.

### La respuesta correcta es la A
En programación orientada a objetos en C++, ¿qué es una clase?

a) Una agrupación de funciones.

b) Un tipo de variable.

c) Un tipo de dato primitivo.

d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

### La respuesta correcta es la D
¿Qué son los templates en C++?

a) Un tipo especial de clase.

b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

c) Una forma de definir variables.

d) Una característica específica de C.

### La respuesta correcta es la B

# Instrucciones para la Pregunta de Desarrollo de Código:



## Rúbrica

(30%) Implementación de la estructura Estudiante:

La estructura Estudiante está correctamente implementada tanto en C como en C++.
(20%) Implementación de la función mostrarEstudiante():

La función mostrarEstudiante() está correctamente implementada y muestra correctamente todos los campos de una instancia de Estudiante.
(30%) Comparación entre las dos implementaciones:

Se proporciona una comparación clara y correcta entre las implementaciones de C y C++.
(20%) Calidad del código:

Todo el código está bien comentado, bien organizado, sigue buenas prácticas de programación y se compila sin errores ni advertencias en CLion.
## Importante:

Todos los códigos deben ser originales. Se utilizarán herramientas de detección de plagio para verificar la originalidad del código.
El código debe estar bien documentado y organizado.
Se debe incluir un archivo README con instrucciones sobre cómo compilar y ejecutar el programa.
El código debe compilarse sin errores ni advertencias en CLion.
## Estructura del Estudiante:

C++:

Implementa una estructura llamada Estudiante con los campos: nombre, edad, y promedio.
Desarrolla la función mostrarEstudiante() que muestre todos los campos de la estructura.
C:

Realiza una implementación equivalente en el lenguaje C.
Comparativa:

Discute las diferencias clave entre las dos implementaciones.
## Gestión de Materias:

Dado que cada estudiante tiene un conjunto de materias, expande tu implementación para incluir la gestión de las mismas.

C++:

Añade a la estructura Estudiante una lista o vector de materias en las que está inscrito.
Implementa funciones para agregar, eliminar y mostrar estas materias.
C:

Realiza una implementación equivalente en el lenguaje C.
## Registro de Asistencia:

Es vital para la universidad llevar un control de la asistencia de sus estudiantes.

C++:

Diseña una clase o estructura Asistencia que contenga: fecha, materia y estado (asistió, falta, tardanza).
Integra esta estructura con Estudiante y desarrolla funciones para registrar y mostrar la asistencia.
C:

Realiza una implementación equivalente en el lenguaje C.
## Manejo de Excepciones:

El sistema debe ser capaz de manejar situaciones inesperadas, como errores en el formato de la fecha, materias no registradas, etc.

C++:

Implementa excepciones personalizadas para manejar estos escenarios.
Demuestra su uso con bloques try, catch.
C:

Aunque C no tiene un sistema integrado de manejo de excepciones como C++, discute cómo podrías manejar errores y situaciones inesperadas en este lenguaje.


# Descripción de cada ejercicio +  Referencia de los archivos en C++

Estructura del Estudiante (EJ_C++/Estudiante/estudiante.cpp):
Define la clase Estudiante con atributos como nombre, edad y promedio. Implementa una función para mostrar los datos del estudiante.


Gestión de Materias (EJ_C++/Materias/gestion_materias.cpp):
Implementa funciones para agregar, eliminar y mostrar materias de un estudiante. Utiliza un vector para almacenar las materias.

Registro de Asistencias (EJ_C++/Asistencias/registro_asistencias.cpp):
Crea funciones para registrar y mostrar asistencias de un estudiante. Usa un vector para guardar las asistencias y verifica el formato de la fecha.

Manejo de Excepciones (incluido en todos los archivos .cpp):
Implementa excepciones personalizadas para manejar errores como materia no encontrada o fecha inválida. Usa bloques try-catch en cada función principal.

Archivo Principal (main.cpp):
Contiene solo las llamadas a las funciones principales: estructuraDelEstudiante(), gestionDeMaterias(), y registroDeAsistencias().

# Descripción de cada ejercicio +  Referencia de los archivos en C

En el programa en C, la estructura de datos principal es la estructura Estudiante. En lugar de usar clases como en C++, se define una estructura que contiene los atributos nombre, edad y promedio. Para mostrar los datos del estudiante, se implementa una función mostrarEstudiante() que recibe una instancia de la estructura y muestra sus atributos utilizando la función printf. Esta estructura permite almacenar la información básica de cada estudiante de manera sencilla. El código relacionado con esto se encuentra en el archivo parte1/estructura_estudiante.c.

En cuanto a la gestión de materias, en C se usa un arreglo para almacenar las materias del estudiante, ya que C no tiene un tipo de datos como el vector de C++. Se implementan funciones como agregarMateria() para añadir nuevas materias al arreglo y mostrarMaterias() para imprimir la lista de materias que tiene un estudiante. Aunque C no permite eliminar directamente elementos de un arreglo, se mantiene un contador para llevar la cuenta de las materias agregadas. Todo esto se gestiona en el archivo Materias/Materias.c.

Para el registro de asistencias, se define una estructura Asistencia, que contiene los campos fecha, materia y estado (asistió, falta, etc.). Al igual que con las materias, se utiliza un arreglo para almacenar los registros de asistencia de cada estudiante. Las funciones registrarAsistencia() y mostrarAsistencias() permiten gestionar y mostrar las asistencias. En C, la fecha se maneja como una cadena de caracteres y se verifica manualmente su formato. Este código se encuentra en el archivo Asistencia/Asistencia.c.

En lo que respecta al manejo de errores, en C no existen excepciones como en C++, por lo que se realiza una verificación manual de errores. Por ejemplo, antes de procesar los datos, se comprueba que la fecha o la materia sean válidas. Si algún dato es incorrecto, se muestra un mensaje de error usando printf. Esto asegura que el programa no falle ante entradas erróneas, aunque de manera más rudimentaria que en C++. Todo esto se maneja con if y for.

Finalmente, el archivo principal (main.c) se encarga de coordinar el flujo del programa. En él se hacen las llamadas a las funciones principales como estructuraDelEstudiante(), gestionDeMaterias() y registroDeAsistencias(), que permiten ejecutar las distintas partes del programa en el orden necesario. Este archivo reúne todas las funcionalidades y facilita la ejecución del programa completo.

En resumen, aunque en C no contamos con herramientas como clases o excepciones, se pueden lograr los mismos resultados utilizando estructuras, arreglos y verificaciones manuales de errores. Las diferencias clave con C++ son la ausencia de orientación a objetos y el manejo manual de errores, que en C se realiza mediante condiciones y mensajes en lugar de excepciones.

# Conclusión:

¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?

Considero que C++ es la mejor opción para el proyecto. Esto se debe a que permite trabajar de forma más organizada gracias a la orientación a objetos, lo que facilita la creación de estructuras como estudiantes, materias y asistencia. Además, cuenta con herramientas modernas como el manejo de excepciones, que ayudan a prevenir errores inesperados, y una amplia biblioteca estándar que simplifica la gestión de datos. Estas características hacen que C++ sea más flexible y escalable para un proyecto de esta magnitud.

¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?

Dividir el proyecto en etapas pequeñas: Trabajar por partes permitirá identificar problemas más rápido y asegurarse de que todo funciona correctamente antes de pasar al siguiente paso.
Usar herramientas colaborativas: Implementar el uso de GitHub para manejar el código de forma segura y mantener un historial de cambios ayudará mucho al equipo.
Probar constantemente: Es importante realizar pruebas frecuentes del código para garantizar que todo funciona como se espera y que no se generen nuevos errores.
Capacitar al equipo: Si alguien del equipo no tiene experiencia suficiente con C++, sería útil realizar talleres o prácticas para que todos puedan trabajar al mismo nivel.
Pensar en el futuro: Como este sistema manejará datos sensibles de muchos estudiantes, es clave pensar desde ahora en medidas de seguridad y en cómo integrar bases de datos para almacenar la información de forma eficiente y protegida.



### INFORMACIÓN DE CHATPT
