#include <stdio.h>
#include <iostream>
using namespace std;

struct Pila{
    char dato;
    Pila *sig;
};

void agregarPila(Pila *&,char);
void sacarPila(Pila *&,char &);


int main() {
    Pila *cima=NULL;
    char dato;
    char rpt;
    do{
        printf("Caracter:");
        cin>>dato;
        agregarPila(cima,dato);

        printf("Otro caracter? s/n\n");
        cin>>rpt;
    }
    while((rpt=='s') || (rpt=='S'));
	{
            printf("\n");
            while (cima!=NULL){
                sacarPila(cima,dato);
               cout<<dato;
            }
    }
    return 0;
}
void agregarPila(Pila *&cima,char n){
    Pila *nueva_pila= new Pila();
    nueva_pila->dato=n;
    nueva_pila->sig=cima;
    cima=nueva_pila;
    printf("Caracter agregado\n");
};
void sacarPila(Pila *&cima, char &n){
    Pila *aux= cima;
    n= aux->dato;
    cima= aux->sig;
    delete aux;
};
