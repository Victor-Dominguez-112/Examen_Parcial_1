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

	// Destructor con par�metros
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
	cout << endl;
	cout << endl;
	Rect rect1;
	rect1.Imprimir();

	Rect rect2(0, 0, 5, 5);
	rect2.Imprimir();

	Rect rect3(10, 3);
	rect3.Imprimir();

	float finx, finy;
	if (rect2.ImprimirRect(rect2, finx, finy))
	{
		cout << "El rectangulo terminara en (" << finx << ", " << finy << ")" << endl;
	}

	Rect a(0, 0, 5, 5);
	Rect b(6, 6, 5, 5);
	Rect c(2, 2, 2, 2);
	Rect d(1, 1, 7.5, 2);

	cout << "\nPruebas del traslape" << endl;
	cout << "A Y B se traslapan " << (a.CheckOverlap(a, b) ? "SI" : "NO") << endl;
	cout << "A Y C se traslapan " << (a.CheckOverlap(a, c) ? "SI" : "NO") << endl;
	cout << "A Y D se traslapan " << (a.CheckOverlap(a, d) ? "SI" : "NO") << endl;
	cout << endl;
	cout << endl;
	//Ejercicio 2		Ejercicio 2		Ejercicio 2 



	//Ejercicio 3		Ejercicio 3		Ejercicio 3 
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

	//Ejercicio 3		Ejercicio 3		Ejercicio 3

	return 0;
}