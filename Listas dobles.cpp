#include<stdio.h>
#include<iostream>

using namespace std;

typedef int TipoDato;

struct nodo{
    struct nodo *Ant;
	TipoDato Info;
	struct nodo*Sig;
};
typedef struct nodo*Lista;

int ListaVacia(Lista P, Lista F){
	return ((P==NULL)&&(F==NULL));
};
void IniciarLista(Lista &P, Lista &F){
	P=NULL;
	F=NULL;
};
void RecorridoLista(Lista P, Lista F){
	Lista Q;
	int h=0;
	Q=P;
	system("CLS");
	while(Q!=NULL){
		cout<<"|"<<Q->Info<<" ";
		Q = Q->Sig;
		h++;
	}
	cout<<endl<<"Total de nodos: "<<h<<endl;
};

void InsertaInicio(Lista &P, TipoDato x){
    Lista Q;
    Q=new nodo;
    Q->Info = x;
    Q->Sig= P;
    P=Q;
}
void InsertaFinal(Lista &P, TipoDato x){
    Lista T,Q;
    T=P;
    while(T->Sig!=NULL){
    T=T->Sig;
    }
    Q=new nodo;
    Q->Info=x;
    Q->Sig= NULL;
    T->Sig = Q;
}
void InsertarInicio(Lista &P, Lista &F, TipoDato x){
	Lista Q;
	Q=new nodo;
	Q->Info=x;
	Q->Ant=NULL;

	if(ListaVacia(P,F)==1){
		Q->Sig=NULL;
		P=Q;
		F=Q;
	}else{
		Q->Sig=P;
		P->Ant=Q;
		P=Q;
	}
}

void EliminaPrimero(Lista &P, Lista &F){
    Lista Q;
    if(ListaVacia(P,F)==1){
    cout<<" No hay elementos. "<<endl;
    }
    else {
    Q=P;
    if(Q->Sig==NULL){
        P=NULL;
        F=NULL;
    }
    else{
    P=Q->Sig;
    P->Ant=NULL;
    }
    delete Q;
    }
}
void EliminaFinal(Lista &P, Lista &F){
    Lista Q;
    if(ListaVacia(P,F)==1){
    cout<<" No hay elementos. "<<endl;
    }
    else{
    Q=F;
    if(Q->Ant==NULL){
    P=NULL;
    F=NULL;
    }
    else{
    F=Q->Ant;
    F->Sig=NULL;
    }
    delete Q;
    }
}
void EliminaX(Lista &P, Lista &F, TipoDato x){
    Lista Q,T,R;
    Q=P;
    while((Q->Sig!=NULL)&&(Q->Info !=x)){
    Q=Q->Sig;
    }
    if(Q->Info == x){
         if((Q==P)&&(Q==F)){
            P=NULL;
            F=NULL;
            }
         else{
           if(Q==P){
              P=Q->Sig;
              P->Ant=NULL;
           }
           else{
               if(Q==F){
                F=Q->Ant;
                F->Sig=NULL;
               }
               else{
                  T=Q->Ant;
                  R=Q->Sig;
                  T->Sig=R;
                  R->Ant=T;
               }
           }
            }delete Q;

}
else{
    cout<<" El elemento x no se encuentra. "<<endl;
}
}
void EliminarAntesX(Lista &P,Lista &F, TipoDato x){
     Lista Q,R,T;
     Q=P;
     while((Q->Sig!=NULL)&&(Q->Info!=x)){
     Q=Q->Sig;
}
if(Q->Info==x){
    if(P==Q){
    cout<<" No existe nodo anterior al siguiente"<<endl;
    }
    else{
    T=Q->Ant;
    if(P==T){
    P=Q;
    P->Ant=NULL;
    }
    else{
    R=T->Ant;
    Q->Ant=R;
    R->Sig=Q;
    }
    delete T;
    }

}
else{
    cout<<" El elemento que ingreso no se encuentra. "<<endl;
}
}
void EliminarDespuesX(Lista &P,Lista &F, TipoDato x){
     Lista Q,R,T;
     Q=P;
     while((Q->Ant!=NULL)&&(Q->Info!=x)){
     Q=Q->Ant;
}
if(Q->Info==x){
    if(F==Q){
    cout<<" No existe nodo despues al siguiente"<<endl;
    }
    else{
    T=Q->Sig;
    if(F==T){
    F=Q;
    F->Sig=NULL;
    }
    else{
    R=T->Sig;
    Q->Sig=R;
    R->Ant=Q;
    }
    delete T;
    }

}
else{
    cout<<" El elemento que ingreso no se encuentra. "<<endl;
}
}

int main(){
    Lista P,F;
    TipoDato x;
    int opcion;
    IniciarLista(P,F);
    do{
    cout << "Listas doblemente enlazadas"<<endl;
    cout<<" 1. Ingresar un nodo"<<endl;
    cout<<" 2. Inserta al inicio"<<endl;
    cout<<" 3. Insertar al final"<<endl;
    cout<<" 4. Eliminar primer elemento"<<endl;
    cout<<" 5. Elimina ultimo elemento"<<endl;
    cout<<" 6. Elimina un elemento"<<endl;
    cout<<" 7. Elimina antes de X"<<endl;
    cout<<" 8. Eliminar despues de X"<<endl;
    cout<<" 9. Mostrar Lista"<<endl;
    cout<<" 0. Salir."<<endl;
    cin>>opcion;
    switch(opcion){
    case 1:
        cout<<"Ingrese un elemento a insertar: "<<endl;
        cin>>x;
        InsertarInicio(P,F,x);
        break;
    case 2:
        cout<<"Ingrese un elemento a insertar: "<<endl;
        cin>>x;
        InsertaInicio(P,x);
        break;
    case 3:
        cout<<"Ingrese un elemento a insertar: "<<endl;
        cin>>x;
        InsertaFinal(P,x);
        break;
    case 4:
        EliminaPrimero(P,F);
        break;
    case 5:
        EliminaFinal(P,F);
        break;
    case 6:
        cout<<"Ingrese un numero a eliminar: "<<endl;
        cin>>x;
        EliminaX(P,F,x);
        break;
    case 7:
        cout<<"Ingrese un elemento x: "<<endl;
        cin>>x;
        EliminarAntesX(P,F,x);
        break;
    case 8:
        cout<<" Ingrese un elemento x: "<<endl;
        cin>>x;
        EliminarDespuesX(P,F,x);
        break;
    case 9:
        RecorridoLista(P,F);
        break;
 }
    }
    while(opcion!=0);
    return 0;
}
