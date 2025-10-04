//Ejercicio Estructuras : 35 puntos.
//1) Hacer una estructura(struct) llamada VectorDeValores.
//1.1) Internamente tiene dos variables, uno es un puntero a float, y la otra es un int para el tamaño del array.
//1.2) Hacer un constructor que reciba como parámetros un array de floats y un int del tamaño del array de floats y los asigne a las variables internas.
//1.3) Hacer un destructor que libere la memoria dinámica solicitada, e imprima cuántos elementos liberó.
//1.4) Hacer un constructor por defecto, que ponga el tamaño del array en 2, y pida la memoria dinámica correspondiente, y después inicialice esos valores en 0.

#include "Ejercicio1_Estructuras.h"
#include <iostream>
using namespace std;

//Constructor con parámetros
VectorDeValores::VectorDeValores(float Myarray[], int tamano)
{
	TamanoArray = tamano;
	PuntFloat = new float[TamanoArray]; //pediremos memoria para la variable TamañoArray
	for (int i = 0; i < TamanoArray; i++)
	{
		PuntFloat[i] = Myarray[i]; //Copiaremos los valores
	}
	cout << "Creacion de un vector con " << TamanoArray << " elementos" << endl;
}

//Destructor
VectorDeValores::~VectorDeValores()
{
	delete[] PuntFloat; //Liberamos la memoria ocupada o eliminar
	cout << "Se elimino un vector con " << TamanoArray << " elementos" << endl;
}

//Constructor por defecto
VectorDeValores::VectorDeValores()
{
	TamanoArray = 2; //Damos un tamaño de 2
	PuntFloat = new float[TamanoArray]; //pedimos la memoria
	for (int i = 0; i < TamanoArray; i++)
	{
		PuntFloat[i] = 0; //Iniciamos en 0
	}
	cout << "Creacion de un vector con tamano de " << TamanoArray << endl;
}