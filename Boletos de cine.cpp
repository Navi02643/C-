#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main(){
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
