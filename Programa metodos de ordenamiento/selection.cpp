#include <iostream>
using namespace std;
#define MAX 100
int cont=0;

void select(int  array[], int n){
     int i, j, k, aux;
	 for (k = 0; k <= n; k++) {
		i = k;
		aux =array[k];
		for (j = k + 1; j <= n; j++) {
			if (array[j] < aux) {
				i = j;
				aux = array[i];
				cont++;
			}
		}
		array[i] = array[k];
		array[k] = aux;
	}	
}

void Leer(int array[], int n){
	for(int l = 1; l <=n; l++)
    {
        cout << "Dato " << l << ":";
    	cin >> array[l]; 
    }
}


void print(int array[], int n){
	for(int l = 0; l <= n-1; l++)
    {
        cout<< array[l] << " ";
    	
    }
}
int main()
{
	int n;
    int array[MAX];
    do{
    cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>MAX)
            cout<<"Debe ingresar un valor  > a 0 y < a "<<MAX<<endl;
    }while(n<=0||n>MAX);
    cout<<endl;
	
	Leer(array, n);
    select(array, n);
    printf("\nOrdenamiento: ");
	print(array, n);

	printf("\n\nEl contador es: %i", cont);
}
