#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>
using namespace std;

main(){
	int hrs,min,seg;
	for(hrs=0;hrs<=1;hrs++){
		for (min=0;min<=60;min++){
			for(seg=0;seg<=60;seg++){
				cout<<hrs<<":"<<min<<":"<<seg<<"\n";
				system("cls");
				Sleep(1);
		} }
}
system("pause");
}
