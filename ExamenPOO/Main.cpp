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
	for (int i = 0; i < Uno.tamanoArray; i++)
	{
		cout << Uno.puntFloat[i] << " ";
	}
	cout << endl;

	// Destructor con par�metros
	float array[3] = { 1.5,2.5,3.5 };
	VectorDeValores Dos;
	cout << "Vector De Valores numero Dos: ";
	for (int i = 0; i < Dos.tamanoArray; i++)
	{
		cout << Dos.puntFloat[i] << " ";
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

	float* FloPtr = nullptr; //Creaci�n del puntero float

	//Pedir memoria y dar el valor de 7.77
	FloPtr = new float;	//Pedimos espacio en la memoria
	*FloPtr = 7.77;		//Guardamos el valor
	cout << "Valor del puntero FloPtr es de: " << *FloPtr << endl;

	float valor = 6.66; //Declaramos una variable float con valor de 6.66

	FloPtr = &valor; //Hacemos que el puntero apunte a la direcci�n de valor

	//Advertencia de memory leak
	cout << "Cuidado, acabas de causar un memory leak" << endl; 

	//Explicaci�n memory leak
	cout << "Esto es un memory leak porque se perdi� la referencia a la memoria que se pidio con new" << endl;
	cout << "Esa memoria ya no puede liberarse, porque el puntero ahora apunta a otro lugar." << endl;
	cout << "Para evitar esto se debio liberar la memoria con delete ptr; antes de poder reasignarlo." << endl;

	//Pedimos memoria din�mica y le asignamos un valor de 1984
	FloPtr = new float;
	*FloPtr = 1984;
	cout << "Nuevo valor asignado al puntero FloPtr: " << *FloPtr << endl;

	//Creamos un nuevo puntero que apunte al mismo lugar que el puntero FloPtr
	float* NewPtr = FloPtr;
	cout << "NewPtr apunta a sia el mismo valor que el puntero FloPtr: " << NewPtr << endl;

	//Liberamos la memoria y lo colocamos como nullptr
	delete FloPtr; //Libera la memoria
	FloPtr = nullptr;
	cout << "Se libero la memoria del puntero FloPtr y se le asigno el valor de nullptr" << endl;

	//Checamos si FloPtr es igual a nullptr
	if (FloPtr == nullptr)
	{
		cout << "El puntero FloPtr es de valor nullptr" << endl;
	}

	//Checamos si FloPtr es igual a NULL
	if (FloPtr == NULL)
	{
		cout << "El puntero FloPtr es de valor NULL" << endl;
	}

	//Checamos si NewPtr es nullptr o NULL
	if (NewPtr == nullptr || NewPtr == NULL)
	{
		cout << "El puntero NewPtr es del valor nullptr o NULL" << endl;
	}
	else
	{
		cout << "El puntero NewPtr no es nullptr o NULL" << endl;
		cout << "Cuidado: el puntero NewPtr apunta a memoria que ya ha sido liberada" << endl;
	}
	cout << endl;
	//Ejercicio 3		Ejercicio 3		Ejercicio 3

	return 0;
}