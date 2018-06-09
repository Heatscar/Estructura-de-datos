#include <iostream>
#include <stdlib.h>
using namespace std;

//Para heapify (apilar) un sub-arbol con raiz en el nodo i que es un indice de arr[]
void heapify(int arr[], int n, int i)
{
    int largest=i;  //Se inicializa largest como la raiz
    int izq=2*i+1;  //Izquierdo = 2*i + 1
    int d=2*i+2;  //Derecho = 2*i + 2

    //Si el hijo izquierdo es mas grande que largest
    if (izq<n&&arr[izq]>arr[largest])
        largest=izq;

    //Si el hijo derecho es mas grande que largest
    if (d<n&&arr[d]>arr[largest])
        largest=d;

    //Si largest no es raiz
    if (largest!=i)
    {
        swap(arr[i],arr[largest]);

        //Llamada recursiva de heapify en el arbol subsecuente
        heapify(arr, n, largest);
    }
}

//Funcion principal de ordenamiento
void heapSort(int arr[],int n)
{
    //Construir la pila (Reordenar el arreglo)
    for (int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);

    //Extraer uno por uno los elementos de la pila
    for (int i=n-1;i>=0;i--)
    {
        //Mover raiz actual al final
        swap(arr[0],arr[i]);

        //Llamar a la pila maxima en la pila reducida
        heapify(arr,i,0);
    }
}

// Funcion para imprimir
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int n=1;
    int arr[n],t;
    cout<<"Ingresa el tamaño del arreglo"<<endl;
    cin>>n;
    system("CLS");
    t=n-1;
    for(int i=0;i<=t;i++)
    {
        cout<<"Ingresa el dato numero "<<i<<" del arreglo"<<endl;
        cin>>arr[i];
        system("CLS");
    }
    cout<<"El arreglo desordenado es:"<<endl;
    for (int i=0; i<n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    heapSort(arr, n);

    cout<<"El arreglo ordenado es: "<<endl;
    printArray(arr, n);
}
