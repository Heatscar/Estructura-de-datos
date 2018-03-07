#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

using namespace std;
#define Max 100

int v[Max];
int N=-1;
 int y;
 int x;

void MenuPrincipal();
void InsertarOrdenado(int x);
void EliminarOrdenado(int y);
void ModificarOrdenado(int x,int y);
void Ordenar();
void Mostrar();
bool Comprobar(int x);

int main(){
 MenuPrincipal();
 return 0;
}

void MenuPrincipal(){
int opc=0;

do{
    system("cls");
    printf("1-. Insertar\n");
    printf("2-. Eliminar\n");
    printf("3-. Modificar\n");
    printf("4-. Mostrar\n");
    printf("5-. Salir\n");
    scanf("%i", &opc);

    system("cls");
    switch(opc){
   case 1:
       printf("valor a insertar: ");
       scanf("%i", &x);
       InsertarOrdenado(x);
    break;
   case 2:
       printf("valor a eliminar: ");
       scanf("%i", &y);
       EliminarOrdenado(y);
    break;
   case 3:
       printf("Valor a modificar:  ");
       scanf("%i", &x);
       printf("Nuevo valor: ");
       scanf("%i", &y);
       ModificarOrdenado(x,y);
    break;
   case 4:
       Mostrar();
    break;
    }
 }while(opc!=5);
}

void InsertarOrdenado(int x){
    if(Comprobar(x)){
        if(N<Max){
            v[N]=x;
            N++;
            Ordenar();
        }
        else{
            printf("El Arreglo esta Lleno\n");
            system("pause");
            system("cls");
        }
    }
    else{
        printf("Ya existe\n");
        system("pause");
        system("cls");
    }

}
bool Comprobar(int x){
    for(int i=0;i<Max;i++){
        if(x==v[i]){
            return false;
            break;
        }
        if(i==99){
            return true;
        }
    }
}

void Ordenar(){
    for(int i=0;i<Max-1;i++){
        if(v[i]>v[i+1]){
            int aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
        }
    }
}

void ModificarOrdenado(int x, int y){
    if(Comprobar(y)){
        for(int i=0;i<Max;i++){
            if(x==v[i]){
                v[i]=y;
                Ordenar();
                break;
            }
        }
    }
    else{
        printf("Ya existe\n");
        system("pause");
        system("cls");
    }
}

void Mostrar(){
    for(int i=0;i<Max;i++){
            if(v[i]!=NULL){
                cout<< v[i] <<"\n";
            }
    }
    printf("\n");
    system("pause");
    system("cls");
}

void EliminarOrdenado(int x){
    for(int i=0;i<Max;i++){
        if(v[i]==x){
            for(int j=i;j<Max;j++){
                if(j<Max-1){
                    v[j]=v[j+1];
                }
                else if(j==99){
                    v[j]=0;
                }
            }
            N--;
            break;
        }
    }
}
