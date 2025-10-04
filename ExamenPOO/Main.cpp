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
	//Ejercicio 3		Ejercicio 3		Ejercicio 3

	return 0;
}