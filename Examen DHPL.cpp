#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<Ctime>
#include<windows.h>
#include<math.h>
using namespace std;

main(){
	
	int matricula,respuesta,idioma,contador,repetir,calificacion,ok;
	string nombre,nombre2,apellidop,apellidom,carrera,turno;
	system("color D0");
	system("mode con: cols=125 lines=100");
	do{
		contador=0;
		system("cls");
		cout<<"Ingrese su primer nombre\n";
		cin>>nombre;
		cout<<"Ingrese su segundo nombre(si no tienes ingresa una x)\n";
		cin>>nombre2;
		cout<<"Ingrese su apellido paterno\n";
		cin>>apellidop;
		cout<<"Ingrese su apellido materno\n";
		cin>>apellidom;
		cout<<"Ingrese su carrera\n";
		cin>>carrera;
		cout<<"Ingrese su matricula\n";
		cin>>matricula;
		cout<<"Ingrese su turno\n";
		cin>>turno;
		system("cls");
		system("color F0");
		cout<<"Selecciona la expresion coloquial adecuada para (2x^2-3x^3)^3\n";
		cout<<" 1)El cubo de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cubo.\n 2)El cuadrado de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cubo.\n 3)El cubo de la diferencia del doble de un numero elevado al cubo menos tres veces el mismo numero elevado al cubo.\n 4)El cubo de la diferencia del doble de un numero elevado al cuadrado menos tres veces el mismo numero elevado al cuadrado.\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Selecciona la exprexion algebraica adecuada:El doble de un numero elevado al cubo aumentado por otro numero al cuadrado disminuido en siete.\n";
		cout<<"1)2x^3+y^2-7\n2)2x^3-y^2+7\n3)2x^3-y^2-7\n4)2x^3+y^2+7\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: 2[(3+4)+(5+6)]-[(7-8)-(9-10)]\n";
		cout<<"1)36\n2)35\n3)40\n4)-40\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: 2a[(3a+4a^2)+(5a-6a^2)]-[(7a-8a^2)-(9a+10a^2)]\n";
		cout<<" 1)-4a^3+18a^2-2a\n 2)-4a^3+18a^2+2a\n 3)-4a+18a-2a\n 4)4a^3+8a^2-7a\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: (a^2+2)(a^2b+2a^3c+3a^4d+4a^5e)\n";
		cout<<"1)4a^8e+3a^7d+2a^6c+a^5b+8a^5e+6a^4d+4a^3c+2a^2b\n2)4a^8e-3a^7d-2a^6c-a^5b-8a^5e-6a^4d-4a^3c-2a^2b\n3)4ae-3ad+2ac-ab+8ae-6ad+4ac-2ab\n4)-4a^8e+3a^7d-2a^6c+a^5b-8a^5e+6a^4d-4a^3c+2a^2b\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: -3{-1/3[a^2-2a+a^2+4a^5]}\n";
		cout<<" 1)2a^2+17a\n 2)-2a+17a^2\n 3)2a+17a^2\n 4)-2a^2-17a\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: (2x^2-3x^3)(2ax+3bx+4cx)\n";
		cout<<" 1)-6ax^4-9bx^4-12cx^4+4ax^3+6bx^3+8cx^3\n 2)6ax^4+9bx-12cx^4+4ax^3+6bx^3+8cx^3\n 3)-6ax-9bx-12cx+4ax+6bx+8cx\n 4)-6a-9b-12cx+4a+6b^3+8c\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: [(2x^2+3x^3)-(3x^3-2x^2-x-7)](x+1)\n";
		cout<<" 1)-3x^4-x^3+3x^2-5x-6\n 2)3x^2+3x^9+5x^0-6\n 3)3x-f^3-3x-6\n 4)3x-x+3x-5x-6\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve las siguentes operaciones con signos de agupacion: (2a^2x^2+3b^3x^3+4c^4x^4)/x^2\n";
		cout<<" 1)2a^2+3b^3x+4c^4x^2\n 2)2^2+3^3x+4c^2\n 3)2a^2-3b^3x-4c^4x^2\n 4)2a+3bx+4cx^2\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Resuelve lo siguinte: (2a^2x^2+3b^3x^3+4c^4x^4)/x^2}^0\n";
		cout<<" 1)1\n 2)-1\n 3)2a^2-3b^3x-4c^4x^2\n 4)2a^2+3b^3x+4c^4x^2\n";
		cin>>respuesta;
			if (respuesta == 1){
				cout<<"Correcto\n";
				cout<<" \n";
				contador=contador+1;}
			else{
				cout<<"Incorrecto\n";
				cout<<" \n";
				contador=contador+0;}
		cout<<"Examen terminado, pulsa 1 para continuar\n";
		cin>>ok;
		system("cls");
		system("color 3F");
		calificacion=contador*10;
		cout<<"Participante: "<<nombre<<"  "<<apellidop<<"  "<<apellidom<<"\n"<<"Matricula: "<<matricula<<"\n"<<"Carrera: "<<carrera<<"\n"<<"Turno: "<<turno<<"\n"<<"Calificacion: "<<calificacion<<"%"<<" de 100%\n";
		cout<<"¿Intentar de nuevo?\n 1)Si 2)No\n";
		cin>>repetir;
		}
while(repetir!=2);
}
