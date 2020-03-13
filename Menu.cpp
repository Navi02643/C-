#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

void cine(){
	char dia, estudiantes;
int sala, personas;
float costo, total;
cout << "¿Que dia de la semana es (L-M-X-J-V-S-D)?\n";
cin >> dia;
cout << "¿Que sala?\n";
cout << "1-NORMAL\n";
cout << "2-3D\n";
cout << "3-VIP\n"; 
cin >> sala;
cout <<  "¿Cuantas personas?\n";
cin >> personas;
cout << "Son estudiantes: [S][N]\n";
cin >> estudiantes;
if (sala == 1) {
	costo=65;
 }
if (sala ==2 ) {
	costo=90;
 }
if (sala==3) {
    costo=150;
 }
if (estudiantes=='S'||(dia!='S'&&dia!='D')){
    costo=costo-(costo*0.25);
 }
else {
    if (dia=='J'&&dia=='L'){
   	costo=costo/2;
	if (personas%2>0 ){
   		personas=personas+1;
	   }
   }
   }
   total=costo*personas;
   cout <<  "El total a pagar es $" << total;
}
void binario() {
	int exp,digito;
	double binario, decimal;
   cout << "Introduce numero: ";
   cin >> binario;
   exp=0;
   decimal=0;
   while(((int)(binario/10))!=0){
           digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
   }
   decimal=decimal + binario * pow(2.0,exp);
   cout << endl << "Decimal: " << decimal << endl;
    system("pause");
}

void decimal() {
	 int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    system("pause");
}

void reloj() {
	int min,seg;
	for (min=0;min<=1;min++){
		for(seg=00;seg<=59;seg++){
			system("cls");
			cout <<min<<":"<<seg<<"\n";
			Sleep(1000);
		} 
		system("pause");
}
}

void matriz() {
	int con=0;
	int x,y;
	int tabla[4][4];
	for (y = 0;y <= 3;y++){
		for (x = 0;x <= 3;x++){
			tabla[y][x]=con;
			cout<<tabla[y][x];
			if (con < 10){
				cout<<"  ";
			}
			con++;
		}
		cout <<"\n";
	}
}

void piramide(){
int factorial(int numero);
int formula(int numero,int posicion);
    int numero;
    cout<<"Ingrese la potencia: ";
    cin>>numero;
    int x = numero * 2;
    for(int i = 0; i <= numero;++i,x -= 2){
        for(int s = 0; s <= x;s++)
            cout<<" ";
        for(int k = 0; k <= i;++k){
            cout<<setw(4)<<formula(i,k);
        }
        cout<<endl;
    }
    cin.get();
    cin.get();
}
int factorial(int numero)
{
    int factorial = 1;
    for(int i = 1; i <= numero;++i){
            factorial *= i;
    }
    return factorial;
}

int formula(int numero,int posicion)
{
   int combinacion;
   combinacion = factorial(numero)/
   (factorial(numero-posicion)* factorial(posicion));
   return combinacion;  
}
void serie() {
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
void palindromo() {
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
}
main(){
	int num;
	cout<< "¿Que Desea Hacer?\n";
	cout<< "1.Cine\n"<<"2.Conversor de Binario a Decimal\n"<<"3.Conversor de Decimal a Binario\n"<<"4.Reloj\n"<<"5.Matriz\n"<<"6.Piramide\n"<<"7.Serie de Fibonnaci\n"<<"8.Palindromo\n";
	cin>> num;
		switch (num){
		case 1:
			cout<< "Cine\n";
			cine();
			break;
		case 2:
			cout<< "Conversor de Binario a Decimal\n";
			binario();
			break;
		case 3:
			cout<< "Conversor de Decimal a Binario\n";
			decimal();
			break;
		case 4:
			cout<< "Reloj\n";
			reloj;
			break;
		case 5:
			cout<< "Matriz\n";
			matriz();
			break;
		case 6:
			cout<< "Piramide\n";
			piramide();
			break;
		case 7:
			cout<< "Serie de Fibonnaci\n";
			serie();
			break;
		case 8:
			cout<< "Palindromo\n";
			palindromo();
			break;
		default:
			cout<< "Error\n";
		}
return 0;}
