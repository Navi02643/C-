#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;

main(){
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
