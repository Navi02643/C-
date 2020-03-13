#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;

main(){
	int I=0;
	string palabra;
	cout << "Ingresa la palabra:\n";
	cin >> palabra;
	int J = palabra.length() -1;
	int mitad = J / 2;
	while (palabra[I] == palabra[J]){
		if (mitad == I){
			cout << "Es palindromo\n";
			break;
		}
		J--;
		I++;
	if (mitad !=I){
		cout << "No es palindromo\n";
		break;}
	}
return 0;
}

