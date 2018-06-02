#include<stdio.h>
#include<iostream>
using namespace std;
typedef int TipoDato;

struct nodo{
	TipoDato Info;
	struct nodo*Sig;
};
typedef struct nodo*Lista;
void IniciarLista(Lista &P){
	P=NULL;
};
int ListaVacia(Lista P){
	return (P==NULL);
};
void RecorridoLista(Lista P){
	Lista Q;
	int h=0;
	Q=P;
	system("CLS");
	while(Q!=NULL){
		cout<<"|"<<Q->Info;
		Q = Q->Sig;
		h++;
	}
	cout<<" "<<endl;
	cout<<"Total de nodos: "<<h<<endl;
};
void CrearInicio(Lista &P){
	Lista Q;
	int Res;
	P=new nodo;
	cout<<"Escriba el valor del nodo"<<endl;
	cin>>P->Info;
	P->Sig = NULL;
	cout<<"Desea agregar mas nodos a la lista  1=si, 2 = no "<<endl;
	cin>>Res;

	while(Res==1){
		Q = new nodo;
		cout<<"Escriba el valor del nodo: "<<endl;
		cin>>Q->Info;
		Q->Sig = P;
		P = Q;
		cout<<"Desea mas nodos? 1= si 2= no"<<endl;
		cin>>Res;
	}
	RecorridoLista(P);
}
void EliminaInicio(Lista &P){
    Lista Q;
    Q=P;
    P=Q->Sig;
    delete Q;
}
void EliminaUltimo(Lista &P){
Lista Q,T;

if(ListaVacia(P)!=1){
	Q=P;
	while(Q->Sig!=NULL){
	T=Q;
	Q=Q->Sig;
	}//si se econtro

if(Q==P)//x esta en el 1er nodo
P=Q->Sig;
else
T->Sig=Q->Sig;
delete Q;
}
}
void EliminarAntesX(Lista &P,TipoDato x){
    Lista Q,T,R;
    int Band;
    int Dato;
    cout<<"Ingrese el valor x: "<<endl;
    cin>>x;
    if(ListaVacia(P)!=1){
    Band = 1;
    Q=P;
    T=P;}
    while((Band==1)&&(Q->Info!=x)){
    if(Q->Sig!=NULL){
    R=T;
    T=Q;
    Q=Q->Sig;
    }
    else{
    Band = 0;
    }
    }
    if(Band==1){
        if(Q->Sig!=NULL){
            T=Q->Sig;
            Q->Sig=T->Sig;
            delete Q;
        }
    if(P!=Q){
        if(P==T)
        P=Q;}
    else{
        R->Sig=Q;
    delete T;
    }
    }
    }
void  EliminarDespuesX(Lista &P,TipoDato X){
	Lista Q,T,F;
	int band=0;
	if((Q==P)&&(Q==F)){
		P=NULL;
		F=NULL;
		Q=P;}
		else
            while((band==0)&&(Q->Info!=X))
		     if(Q->Sig=NULL)
		Q=Q->Sig;
		else
		band=0;
	if(band==0){
		if(Q->Sig!=NULL){
			T=Q->Sig;

		}else
        cout<<" El numero que ingreso no existe. "<<endl;
	}
	delete Q;

};
void InsertaInicio(Lista &P, int Dato){
    Lista Q;
    cout<<"Ingrese el valor del nodo"<<endl;
    cin>>Dato;
    Q=new nodo;
    Q->Info = Dato;
    Q->Sig= P;
    P=Q;
}
void InsertaFinal(Lista &P, int Dato){
    Lista T,Q;
    T=P;
    cout<<"Ingrese el valor del nodo"<<endl;
    cin>>Dato;
    while(T->Sig!=NULL){
    T=T->Sig;
    }
    Q=new nodo;
    Q->Info=Dato;
    Q->Sig= NULL;
    T->Sig = Q;
}

int main(){
    Lista P;
    TipoDato x;
    int opcion;
    IniciarLista(P);
    cout << "Listas Enlazadas"<<endl;
    do{
    cout<<" 1. Ingresar un nodo"<<endl;
    cout<<" 2. Insertar al inicio"<<endl;
    cout<<" 3. Inserta al final"<<endl;
    cout<<" 4. Eliminar antes de un elemento X"<<endl;
    cout<<" 5. Eliminar despues de un elemento X"<<endl;
    cout<<" 6. Elimina inicio."<<endl;
    cout<<" 7. Elimina ultimo."<<endl;
    cout<<" 8. Mostrar lista y total de nodos"<<endl;
    cout<<" 0. salir"<<endl;
    cin>>opcion;
    switch(opcion){
    case 1:
        CrearInicio(P);
        break;
    case 2:
        int Dato;
        InsertaInicio(P, Dato);
        break;
    case 3:
        InsertaFinal(P, Dato);
        break;
    case 4:
        EliminarAntesX(P,x);
        break;
    case 5:
        EliminarDespuesX(P,x);
        break;
    case 6:
        EliminaInicio(P);
        break;
    case 7:
       EliminaUltimo(P);
        break;
    case 8:
        RecorridoLista(P);
        break;

 }
    }
    while(opcion!=0);
    return 0;
}
