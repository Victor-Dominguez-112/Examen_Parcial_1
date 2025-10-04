#include "Ejercicio3_memoria_dinámica.h"
#include <iostream>
using namespace std;

//3) Declarar un puntero a flotante y asignarle el valor nullptr.
//3.1) Pedir memoria dinámica para dicho puntero, y que dentro tenga el valor 7.77.
//3.2) Declarar una variable de tipo flotante con un valor de 6.66.
//3.3) Hacer que ahora el puntero a flotante del punto 3) apunte a la dirección de memoria de la variable del punto 3.2).
//3.4) Imprimir en pantalla : "Cuidado, acabas de causar un memory leak!".
//3.5) Imprimir en pantalla un texto que describa por qué es un memory leak y qué deberías hacer para evitar dicho memory leak. (Pista: esto está en el archivo main de la clase!pueden ponerlo con sus propias palabras también).
//3.6) Pedir memoria dinámica(otra vez) para el puntero de 3) y asignarle el valor 1984.
//3.7) Hacer un nuevo puntero a float y hacer que apunte a la misma dirección que el puntero del punto 3.6).
//3.8) Después, liberar dicha memoria dinámica borrando el puntero de 3.6) y después asignarle a ese puntero el valor nullptr.
//3.9) Checar si ese puntero es igual a nullptr y si sí lo es, entonces imprimir que esa variable es igual a nullptr.
//3.10) Checar si ese puntero es igual a NULL y si sí lo es, entonces imprimir que esa variable es igual a NULL.
//3.11) Checar si el puntero de 3.7) es nullptr o NULL, y si no es ninguna de las dos, imprimir que esa variable no es nullptr ni NULL y que se debe tener cuidado de usar esa variable porque ya se borró la variable a donde apunta.
