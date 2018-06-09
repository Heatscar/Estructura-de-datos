#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
	int opcion;
    do{
        printf( "1. HeapSort\n");
        printf( "2. Quicksort\n");
        printf( "3. Merge\n");
        printf( "4. Sacudida\n");
        printf( "5. Shell\n");
        printf( "6. POP\n");
        printf( "7. Seleccion\n" );
        printf( "8. Salir\n" );
        scanf( "%d", &opcion );
        system("CLS");
        switch ( opcion ){
            case 1:
				system("heapsort.exe");
				break;
            case 2:
				system("Quicksort.exe");
				break;
            case 3:
                system("Merge.exe");
				break;
            case 4:
				system("sacudida.exe");
				break;
            case 5:
				system("Shell.exe");
				break;
            case 6:
				system("pop.exe");
				break;
			case 7:
				system("selection.exe");
				break;
         }
    } while ( opcion != 8);
    return 0;
}
