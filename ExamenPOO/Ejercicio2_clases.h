#pragma once
#include <iostream>

//Ejercicio de clases : 40 puntos.
//NOTA : para esta parte van a necesitar pensarle un poco m�s, por eso valor m�s.
//2) Hacer una clase(class) llamada Rect, la cual tiene dentro variables para almacenar una coordenada X, una coordenada Y, un alto y un ancho.Para que lo conceptualicen mejor, un Rect ser�a un rect�ngulo en un espacio 2D y X, Y nos define la posici�n d�nde empieza y cu�nto alto y ancho tiene a partir de esa posici�n.
//2.1) Hacer un constructor por defecto que ponga todos esos valores en 0.
//2.2) Hacer un constructor que reciba un par�metro para asignar a cada uno de esos valores.
//2.3) Hacer un constructor que reciba solo dos par�metros, uno para alto y otro para ancho y los asigne.Adem�s, que a las coordenadas X y Y les ponga 0.
//2.4) Hacer una funci�n(m�todo) que reciba por referencia una variable de tipo Rect e imprima las coordenadas X y Y de dicha variable, as� como las coordenadas X y Y donde terminar�a ese Rect tomando en cuenta su Alto y Ancho.La funci�n debe regresar false si al menos uno de los campos del Rect es menor que 0, y regresar true al final si todo sale bien.Adem�s, saquen las coordenadas X y Y donde terminar�a dicho Rect como dos par�metros por referencia.
//2.5) Hacer una funci�n(m�todo) llamada CheckOverlap que reciba dos Rect y regrese true si hay un traslape entre dichos Rect, es decir, si en al menos un punto ocupan el mismo espacio.De lo contrario, regresa false.Ejemplos: los rects{ X = 0, Y = 0, Alto = 5, Ancho = 5 } y{ X = 6, Y = 6, Alto = 5, Ancho = 5 } no se traslapan, mientras que{ X = 0, Y = 0, Alto = 5, Ancho = 5 } y{ X = 2, Y = 2, Alto = 2, Ancho = 2 } s�.Tambi�n{ X = 0, Y = 0, Alto = 5, Ancho = 5 } y{ X = 1, Y = 1, Alto = 7.5, Ancho = 2 } se traslapan.Usen estos ejemplos en su c�digo para demostrar que su funci�n es correcta.
//2.6) 10 Puntos extra, usar la struct del otro ejercicio anterior para guardar los X, Y, Alto y Ancho.


class Ejercicio2_clases
{
};

