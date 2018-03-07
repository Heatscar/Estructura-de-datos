#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
	int opcion;
    do{
    	system("CLS");
        //system("clear");
        printf( "1. Factorial\n");
        printf( "2. Fibonacci\n");
        printf( "3. Imprimir arreglo\n");
        printf( "4. Euclides\n");
        printf( "5. Torres de Hanio\n");
        printf( "6. Palindromo\n");
        printf( "7. Salir.\n" );
        scanf( "%d", &opcion );
        system("CLS");
        //system("clear");
        switch ( opcion ){
        	int i,x,y,z;
            case 1:
			    int n, flag;
				int factorial;
					do{
						flag = 0;
						printf("Ingrese un numero entre 0 y 12: ");
						scanf("%d", &n);
						if((n <= 0) || (n > 12))
							flag  = 1;
					}while(flag);
					factorial = 1;
					for(i=1; i <= n; i++){
						factorial = factorial * i;
					}
					printf("\nEl factorial es: %i\n\n", factorial);
					system("PAUSE");
				break;
            case 2:
				 int cont;x=0;
				  y=1;
				  printf("0| 1 |",z);
				  for (cont=1;cont<=15;cont=cont+1){
				      z=x+y;
				      printf(" %d |",z);
				      x=y;
				      y=z;
				  }
				  printf("\n");
				  system("PAUSE");
				break;
            case 3:
            	int a[5]; 
				int j; 
				//Capturando los valores del arreglo 
				for (i=0; i <5; i=i+1){ 
				printf("De valor de x[%d]:", i+1); 
				scanf("%d",&a[i]); 
				}
				//Desplegando el contenido del archivo
				for(i=0; i <5; i=i+1) 
				printf(" %d|", a[i]);
				printf("\n\n");
				system("PAUSE");
				break;
            case 4:
				int a1, b, c, r;
			    printf("Maximo comun divisor de a y b\n\n");
			    printf("Ejemplo 180 y 324\n");
			    printf("a: ");
			    scanf("%d", &a1);
			    printf("b: ");
			    scanf("%d", &b);
			    r=a1%b;
			    while(r>0){
			              fflush(stdin);
			              a1=b;
			              b=r;
			              r=a1%b;
			    }
			    printf("\nEl maximo comun divisor es: %i\n\n",b);
			    system("PAUSE");
				break;
            case 5:
            	int num3;
            	printf("Cantidad de disco:\n");
            	scanf("%i",&num3);
				for (int x = 1; x < (1 << num3); x++) {
					printf("%i -> %i\n", (x&x - 1) % 3, ((x|x - 1) + 1) % 3);
				}
				system("PAUSE");
				break;
            case 6:
				char palabra[80];
				printf("Programa que determina si una palabra es palindromo\n");
				printf("\nEscribe una palabra: ");
				scanf(" %s",palabra);
				x=strlen(palabra);
				x=x-1;
				for(y=0,z=x;y<=x/2;y++,z--)
				;
				if(palabra[y]==palabra[z])
				printf("Es palindromo\n");
				else
				printf("No es palindromo\n");
				system("PAUSE");
				break;
         }
    } while ( opcion != 7);
    return 0;
}




