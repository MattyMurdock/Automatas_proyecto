# Proyecto AUtomatas y Graficacion
Se integran aqui los proyectos que son de automatas y de graficacion para poder llevar su documentacion y control de los mismos.
Tambien va ser una forma de repasarlos.

## Archivo MOLDE.cpp
Este archivo MOLDE.CPP es un programa en C++ que utiliza la biblioteca de gráficos de Borland (BGI) para dibujar una escena gráfica. El programa realiza las siguientes acciones:

1. Inicializa el modo gráfico utilizando la función initgraph.
- Dibuja un astronauta con varios componentes:
- Mochila
- Casco
- Chaleco
- Brazos
- Manos
- Piernas

2. Dibuja varios elementos adicionales en la escena:
- Estrellas
- Satélites
- La Tierra
- El Sol

> E lproposito del programa es dibujar con estos graficos a un astronautoa.

## Proyecto Automatas .cpp
Este archivo es un programa en C que solicita al usuario ingresar una cadena de caracteres y luego analiza esa cadena para identificar dos operadores y dos operandos. El programa realiza las siguientes acciones:

1. Solicita al usuario que ingrese una cadena de hasta 14 caracteres (más el carácter nulo).
2. Lee la cadena ingresada utilizando `fgets`
3. Recorre la cadena para encontrar el primer operador (`+`) y guarda su posición.
4. Almacena los caracteres antes del operador `+` como el primer operando (`operando1`).
5. Continúa recorriendo la cadena desde la posición del primer operador para encontrar el segundo operador (`R`) y guarda su posición.
6. Almacena los caracteres entre el primer operador y el segundo operador como el segundo operando (`operando2`).
7. Imprime la cadena ingresada y los operandos y operadores identificados.

El programa también tiene una función `comprobar` que imprime los operandos y operadores, aunque no se llama en el `main`.

Aquí está el flujo del programa:

1. Solicita la entrada de una cadena.
2. Identifica y separa los operandos y operadores.
3. Imprime la cadena ingresada y los componentes identificados (comentado en el código actual).

> El propósito del programa parece ser analizar una cadena con una estructura específica, como "hola+adiosR", donde "hola" es el primer operando, "+" es el primer operador, "adios" es el segundo operando y "R" es el segundo operador.