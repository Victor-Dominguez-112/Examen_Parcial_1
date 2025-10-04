#include "Ejercicio3_memoria_din�mica.h"
#include <iostream>
using namespace std;

//3) Declarar un puntero a flotante y asignarle el valor nullptr.
//3.1) Pedir memoria din�mica para dicho puntero, y que dentro tenga el valor 7.77.
//3.2) Declarar una variable de tipo flotante con un valor de 6.66.
//3.3) Hacer que ahora el puntero a flotante del punto 3) apunte a la direcci�n de memoria de la variable del punto 3.2).
//3.4) Imprimir en pantalla : "Cuidado, acabas de causar un memory leak!".
//3.5) Imprimir en pantalla un texto que describa por qu� es un memory leak y qu� deber�as hacer para evitar dicho memory leak. (Pista: esto est� en el archivo main de la clase!pueden ponerlo con sus propias palabras tambi�n).
//3.6) Pedir memoria din�mica(otra vez) para el puntero de 3) y asignarle el valor 1984.
//3.7) Hacer un nuevo puntero a float y hacer que apunte a la misma direcci�n que el puntero del punto 3.6).
//3.8) Despu�s, liberar dicha memoria din�mica borrando el puntero de 3.6) y despu�s asignarle a ese puntero el valor nullptr.
//3.9) Checar si ese puntero es igual a nullptr y si s� lo es, entonces imprimir que esa variable es igual a nullptr.
//3.10) Checar si ese puntero es igual a NULL y si s� lo es, entonces imprimir que esa variable es igual a NULL.
//3.11) Checar si el puntero de 3.7) es nullptr o NULL, y si no es ninguna de las dos, imprimir que esa variable no es nullptr ni NULL y que se debe tener cuidado de usar esa variable porque ya se borr� la variable a donde apunta.
