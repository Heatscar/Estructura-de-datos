#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Algoritmo para calcular el facorial de un numero
int factorial(int n){
	int r;
	if (n==1){
		return 1;
		}
		r=n*factorial(n-1);
		return (r );
		}

//Algoritmo para calcular serie Fibonacci
int fibonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-2) + fibonacci(n-1);
}

//Algoritmo para mostar un arreglo definido
int V[10]={1,2,3,4,5,6,7,8,9,0};
void imprimirArreglo(int []){;
    for(int a = 0; a < 10; a++) printf("%d|", V[a]);
    printf("\n");
}

//Algoritmo para calcular el máximo común divisor
int mcd(int a, int b){
   if (b == 0)
      return a;
   else
      return mcd(b, a % b);
}

//Algoritmo para resolver el puzzle de las torres de Hanio
void hanoi(int n, char source, char target, char aux){
	if(n==0) return;
	hanoi(n-1, source, aux, target);
	printf("%c -> %c\n", source, target);
	hanoi(n-1, aux, target, source);
	}

//Algoritmo para un palindromo
int palindromo(char *vet, int dim, int i){
    if(i == dim/2 && vet[dim-1-i]==vet[i])
        return 1;
    else if(vet[dim-1-i]==vet[i])
        return palindromo(vet, dim, i+1);
    else
        return 0;
    }


int main(){
	int opcion;
    do{
        printf( "1. Factorial\n");
        printf( "2. Fibonacci\n");
        printf( "3. Imprimir arreglo\n");
        printf( "4. Euclides\n");
        printf( "5. Torres de Hanio\n");
        printf( "6. Palindromo\n");
        printf( "7. Salir.\n" );
        scanf( "%d", &opcion );
        system("clear");
        switch ( opcion ){
			int n;
            case 1:
				int res;
				printf("Dame un numero: " );
				scanf("%d",&n );
				res=factorial(n);
				printf("El factorial de %d es: %d \n",n,res);
				break;
            case 2:
				int i;
				for(i=0;i<16;i++){
					printf("%d Fibonacci number = %d\n", i, fibonacci(i));
				}
				break;
            case 3:
                imprimirArreglo(V);
				break;
            case 4:
				int a, b, r;
				printf ("Introduce el numero: ");
				scanf ("%d", &a);
				printf ("Introduce el numero 2: ");
				scanf ("%d", &b);
				r = mcd (a, b);
				printf ("El maximo común divisor de %d y %d es: %d\n",a, b, r);
				break;
            case 5:
				printf("Dame el numero de discos\n");
				scanf("%i",&n);
				hanoi(n, 'A', 'C', 'B');
				break;
            case 6:
				char palabra[100];
				scanf("%s", palabra);
				puts(palabra);
				if(palindromo(palabra, strlen(palabra), 0) == 1)
					printf("Es palindromo\n");
				else
					printf("No es palindromo\n");
				break;
         }
    } while ( opcion != 7);
    return 0;
}




