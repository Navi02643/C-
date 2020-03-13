#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;

main(){
	int num1=0,num2=1,num3,veces,cont;
	printf ("¿cuantas veces se hara la serie?\n");
	scanf ("%i",&veces);
	cont=1;
	while (cont<=veces){
		cout <<num2<<",";
		num3=num1+num2;
		num1 = num2;
		num2=num3;
		cont++;
	}
}


