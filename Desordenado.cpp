#include<cstdio>
#include<stdio.h>
#include<cstdlib>

const int MAX = 20;
int V[MAX]; 
int N = -1;

void InsertarDesordenado(int [], int &, int Y){
    if(N < MAX - 1){
        N++;
        V[N] = Y;
    }
	else{
        printf("El valor Y no se puede insertar. No hay espacio\n");
    }
}
void EliminarDesordenado(int [], int &, int X){
    int I = 0;
    while((I <= N) && (X != V[I])){
        I++;
    }
    if(I > N){
        printf("El valor X no se encuentra en el arreglo\n");
    }
	else{
        for(int K = I ; K <= N - 1 ; K++){
            V[K] = V[K+1];
        }
        N--;
    }
}
void ModificarDesordenado(int [], int &, int X, int Y){
    int I = 0;
    while((I <= N) && (X != V[I])){
        I++;
    }
    if(I > N){
        printf("El valor X no se encuentra en el arreglo\n");
    }
	else{
            V[I] = Y;
    }
}
void imprimirArreglo(int []){;
    for(int i = 0; i <= N; i++){
        printf(" %i - ", V[i]);
    }
    printf("\n");
}

int main(){
    int opcion;
    do{
    printf("1.- INSERTAR \n");
    printf("2.- ELIMINAR \n");
	printf("3.- MODIFICAR \n");
	printf("4.- SALIR \n");
    scanf("%i", &opcion);
        switch(opcion){
            case 1:
                int numIn;
                printf("Numero a insertar: ");
                scanf("%i", &numIn);
                InsertarDesordenado(V, N, numIn);
                imprimirArreglo(V);
            break;
            case 2:
                int numEl;
                printf("Numero a eliminar: ");
                scanf("%i", &numEl);
                EliminarDesordenado(V, N, numEl);
                imprimirArreglo(V);
            break;
            case 3:
                int numMod;
                int numSus;
                printf("Numero a modificar: ");
                scanf("%i", &numMod);
                printf("Numero sustituto: ");
                scanf("%i", &numSus);
                ModificarDesordenado(V, N, numMod, numSus);
                imprimirArreglo(V);
            break;
        }
    }
	while(opcion != 4);
    return 0;
}


