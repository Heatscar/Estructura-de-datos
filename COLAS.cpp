#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
#define MAX 100
typedef int TipoDato;

struct Cola{
	int Frente;
	int Final;
	TipoDato Elem[MAX];
};
typedef struct Cola TipoCola;

void InicializarCola(TipoCola & C){
	C.Frente=-1;
	C.Final=-1;
}
bool ColaVacia(TipoCola C){	
	if(C.Frente==-1 && C.Final==-1)
		return true;
	else
		return false;
}
bool ColaLlena(TipoCola C){	
	if(C.Frente==MAX-1)
		return true;
	else
		return false;
}
void InsertarCola(TipoCola &C, TipoDato X){
	if(ColaLlena(C)==true){
		printf("La estructura Cola esta llena.....\n");
		system("pause");
	}
	else {
		if(ColaVacia(C)==true){
			C.Frente++;
			C.Final++;
		}
		else
		C.Final++;
	C.Elem[C.Final]=X;
	}
}
TipoDato EliminarCola(TipoCola &C){
	TipoDato X;
	if(ColaVacia(C)==true){
		printf("La estructuta Cola esta Vacia...\n");
		system("pause");
	}
	else{
		X=C.Elem[C.Frente];
		if(C.Frente==C.Final){
			InicializarCola(C);
		}else{
			C.Frente=C.Frente +1;
		}
	}
	return X;
}



int main(){
	TipoCola A;
	InicializarCola (A);
	
	for(int i=1; i<=100; i++)
		if(i%2==0)
			InsertarCola(A,i);
	
		//vaciar cola
		while(ColaVacia(A)==false)
			printf("Elemento ->  %i \n", EliminarCola(A));
			
		system("pause");
	return 0;
}
