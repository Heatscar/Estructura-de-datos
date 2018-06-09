/*
*	Velasco Ramos Luis Eduardo
*	Ing. Sistemas computacionales
*/
#include <iostream>// Para manejar los Imputs y los Outputs como cout y cin
#include <windows.h>//Unicamente para manejar Sleep(INT);
#include <stdlib.h>//uso de system();
#include <stdio.h>// Similar a la primera libreria
using namespace std;//Agarra TODO el paquete de STD importante para que funcione cin y cout
#define Valores 10
//Matris basica:
int ArregloUnidimencional[Valores]=
{
	0,0,0,0,0,
	0,0,0,0,0
};
void NeuronaBasica(int Valores_Ingresar,int VArray[])
{
	//Esta es una funcion inteligente similar a una neurona basica
	//Pronto sacare una nueva vercion
	if((VArray[0]==0)&&(VArray[1]==0)&&(VArray[2]==0))
	{
		//valores deceados
		for(int Escritura=0; Escritura<Valores_Ingresar; Escritura++)
		{
			printf("Ingrese un valor ->");
			//Se usa Printf ya que tiene dos ventajas
			//1- Lee directamente la ram
			//2- Imprime lineal esto es distinto a cout
			cin>>ArregloUnidimencional[Escritura];
		}
	}
	else
	{
		//Como pudiste dar cuenta esta funcion reconoce automaticamente de 
		//que se trata
		for(int Lectura = 0; Lectura <Valores_Ingresar; Lectura++)
		{
			cout<<Lectura<<": ->"<<VArray[Lectura]<<endl;
		}
	}
}
void Quicksort(int arreglo[],int primero, int ultimo)
{ //Algoritmo Quick Sort
	int i,j,aux, pivote;
	i=primero;/*Swap para hacer fundiocion*/
	j=ultimo;
	pivote=arreglo[(primero+ultimo)/2];//es el elemento medio del arreglo
	do 
	{
	     while(pivote>arreglo[i]){i++;};
	     while(pivote<arreglo[j]){j--;};
		 if((i)<=(j))
		 {
		 	 aux=arreglo[i];
			 arreglo[i]=arreglo[j];
			 arreglo[j]=aux;
			 i++;
			 j--;
		}
	}
	while(i<=j);
     if(primero<j){Quicksort(arreglo,primero,j);}
     if(ultimo>i){Quicksort(arreglo,i,ultimo);}
}
int main()
{
	cout<<"Cuantos elementos decea?"<<endl;
	int N_Elementos=0;
	cin>>N_Elementos;
	if(N_Elementos>Valores)//Continuacion de la funcion inteligente
	{
		puts("No es posible\n intente con otra cantidad menor");
		Sleep(500);
		system("cls");
		main();
	}else
	{
		//Notese que no use una funcion para imprimir
		NeuronaBasica(N_Elementos,ArregloUnidimencional);
		Quicksort(ArregloUnidimencional,0,N_Elementos-1);
		NeuronaBasica(N_Elementos,ArregloUnidimencional);
	}
	return 0;
} 