#include <cstdio>
using namespace std;
 

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
 

void ShakerSort(int a[], int n)
{
	int i, j, k;
	for(i = 0; i < n;)
	{
		
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[j-1])
				swap(&a[j], &a[j-1]);
		}
	 
		n--;
 
		
		for(k = n-1; k > i; k--)
		{
			if(a[k] < a[k-1])
				swap(&a[k], &a[k-1]);
		}
		
		i++;
	}
}
 
int main()
{
	int n, i;
	printf("\nIngrese la cantidad de elementos de datos que se ordenaran: ");
    scanf("%i",&n);

 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		printf("Elemento:",i+1,": ");
		scanf("%i",&arr[i]);
	}
 
	ShakerSort(arr,n);
 
	
	printf("\ndatos ordenados: ");
	for (i = 0; i < n; i++)
		printf("%i - ",arr[i]);
 
	return 0;
}
