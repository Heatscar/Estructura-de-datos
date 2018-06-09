#include<iostream>


using namespace std;

void Bsort(int n );

int main(){
cout<<"Ingrese El Tamano Del Arreglo:"<<endl;
int a;
Bsort(a);
	
	
	
	


	return 0;
}
void Bsort(int n){
	
int cant;
cin>>cant;
	int array[cant];
	int i,j,swap;
cout<<"Ingresa Los Datos Para Llenar El Arreglo"<<endl;
	for(i=0;i<cant;i++){
		cin>>n;
		array[i]=n;
	}
	
	
	
	for(i=0;i<cant;i++){
		for(j=0;j<cant-1;j++){
			if(array[j]>array[j+1]){
				swap=array[j];
				array[j]=array[j+1];
				array[j+1]=swap;
				
			}
		}
	}
	
cout<<"Los Datos Ordenados Por El Metodo Burbuja Son: "<<endl;
	for(i=0;i<cant;i++){
		
		cout<<array[i]<<endl;
	}
	
}
