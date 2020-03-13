#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;

main(){
	int calificacion,respuesta,contador;
	contador=0;
	cout<<"Selecciona la expresion coloquial adecuada para (2x^2-3x^3)^3\n";
	cout<<" 1)El cubo de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cubo.\n 2)El cuadrado de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cubo.\n 3)El cubo de la diferencia del doble de un numero elevado al cubo menos tres veces el mismo numero elevado al cubo.\n 4)El cubo de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cuadrado.\n";
	cin>>respuesta;
		if (respuesta <= 1){
			cout<<"Correcto\n";
			cout<<" \n";
			contador = contador++;
			}
		else{
			cout<<"Incorrecto\n";
			cout<<" \n";
			contador = contador--;
			}
	contador = calificacion;
	cout<<calificacion;
return 0;
}

