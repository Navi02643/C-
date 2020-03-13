#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int num;
	do{
	printf ("Seleccione una opcion\n");
	printf ("1.-Opcion 1\n");
	printf ("2.-Opcion 2\n");
	printf ("3.-Opcion 3\n");
	printf ("4.-Opcion 4\n");
	printf ("5.-Salir\n");
	scanf ("%i",&num);
	
		switch (num){
		case 1:
			printf ("Selecciono Opcion 1\n");
			break;
		case 2:
			printf ("Selecciono Opcion 2\n");
			break;
		case 3:
			printf ("Selecciono Opcion 3\n");
			break;
		case 4:
			printf ("Selecciono Opcion 4\n");
			break;
		case 5:
			printf ("Salir\n");
			break;
		default:
			printf ("Erorr\n");
		}}
	while (num!=5);
}
