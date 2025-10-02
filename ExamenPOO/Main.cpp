#include <iostream>
using namespace std;

#include "Ejercicio1_Estructuras.h"
#include "Ejercicio2_clases.h"


int main()
{
	//Ejercicio 1		Ejercicio 1		Ejercicio 1 
	//Destructor por defecto
	VectorDeValores Uno;
	cout << "Vector De Valores numero Uno: ";
	for (int i = 0; i < Uno.TamanoArray; i++)
	{
		cout << Uno.PuntFloat[i] << " ";
	}
	cout << endl;

	// Destructor con parámetros
	float array[3] = { 1.5,2.5,3.5 };
	VectorDeValores Dos;
	cout << "Vector De Valores numero Dos: ";
	for (int i = 0; i < Dos.TamanoArray; i++)
	{
		cout << Dos.PuntFloat[i] << " ";
	}
	cout << endl;
	//Ejercicio 1		Ejercicio 1		Ejercicio 1 



	//Ejercicio 2		Ejercicio 2		Ejercicio 2 
	//Ejercicio 2		Ejercicio 2		Ejercicio 2 



	//Ejercicio 3		Ejercicio 3		Ejercicio 3 
	//Ejercicio 3		Ejercicio 3		Ejercicio 3

	return 0;
}