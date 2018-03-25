#include<stdio.h>
#include<iostream>
void leeCadena(int cant,int n[]){
    int i;
    for(i=0;i<cant;i++){
        printf("Ingresa numero %i: ", i+1);
        scanf("%i",&n[i]);
    }
     
}
 
void muestraCadena(int cant,int n[]){
    int i;
    printf("\nEl ordenamiento queda de la siguiente manera:\n");
    for(i=0;i<cant;i++){
        printf("Numero %i: %i\n", i+1, n[i]);
    }
}


void ordenShell(int A[],int n){
     
  int i, j, inc, temp;
  for(inc = 1 ; inc<n;inc=inc*3+1);
      while (inc > 0){
          for (i=inc; i < n; i++){
                j = i;
                temp = A[i];
                while ((j >= inc) && (A[j-inc] > temp)){
                    A[j] = A[j - inc];
                    j = j - inc;
                }
                A[j] = temp;
          }
          inc/= 2;
      }
}
  
#define largo 50
int main () 
{
    int A[largo],n;
    do{
		printf("Cantidad de numeros a ingresar: ");
		scanf("%i",&n);
    }while(n<=0||n>largo);
 
    leeCadena(n,A);
    ordenShell(A,n);
    muestraCadena(n,A);
   
}
