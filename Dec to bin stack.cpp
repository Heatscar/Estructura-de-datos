#include<stdio.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
int empty();
int full();
void push(int x);
void pop();
void display();

int empty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int full(){
	if(top==SIZE){
		return 1;
	}
	else{
		return 0;
	}
}
void push(int x){
	if(full()){
		printf("Pila llena\n");
	}
	else{
		top++;
		stack[top] = x;
	}
}
void pop(){
	if(empty()){
		printf("Pila vacia");
	}
	else{
		top--;
	}
}
void display(){
	int i;
	for(i=top;i>=0;i--){
		printf("%d ",stack[i]);
	}
}

int main(){
	int n,remainder;
	printf("Dame el numero decimal:");
	scanf("%d",&n);
	while(n!=0){
		remainder = n%2;
		n = n/2;
		push(remainder);
	}
	display();
}
