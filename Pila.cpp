#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX 15
typedef char TipoDato;
struct Pila{
	int tope;
	TipoDato Elementos[MAX];
};
typedef struct Pila TipoPila;

void InicializarPila (TipoPila P){
	P.tope = -1;
}

bool PilaVacia(TipoPila P){
	return (P.tope==-1);
}

bool PilaLlena(TipoPila P){
	return (P.tope== MAX-1);
}

void PonerPila(TipoPila &P, TipoDato x){
	if(PilaLlena(P)==true){
		printf("LA pila esta llena\n");
		system("PAUSE");
	}
	else{
		P.tope++;
		P.Elementos[P.tope]=x;
	}
}

TipoDato SacarPila(TipoDato &P){
	TipoDato X;
	if(PilaVacia(P)==true){
		
	}
	else{
		X = P.Elementos[P.Tope];
		P.Tope--;
	}
	return X;	
}

int main(){
	printf("Hola Mundo");
	return 0;
}
