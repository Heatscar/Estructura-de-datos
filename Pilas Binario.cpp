#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 100

//Se crea la estructura
typedef struct stack{
 int data[MAX];
 int top;
}stack;

//Pila vacia
int empty(stack *s){
 if(s->top==-1){
    return(1);
}
 return(0);
}

//Pila llena
int full(stack *s){
 if(s->top==MAX-1)
     return(1);
 return(0);
}

//Funcion Push para insercion
void push(stack *s,int x){
 s->top=s->top+1;
 s->data[s->top]=x;
}

//Funcion Pop para extraccion
int pop(stack *s){
 int x;
 x=s->data[s->top];
 s->top=s->top-1;
 return(x);
}

int main(){
	 stack s;
	 int num;
	 s.top=-1;
	     printf("Dame el numero decimal:\n");
	     scanf("%d",&num);
	     
		 if(num==0){
	       	printf("Pila Vacia\n");
	          }
	     while((num!=0)){
	       if(!full(&s)){
	       	//Se toma el numero y saca el residuo
	          push(&s,num%2);
	          //Divide entre 2
	          num=num/2;
	          }
	       else{
	          printf("Pila llena\n");
	          exit(0);
	          }
	     }
	     printf("El numero en binario es: ");
	    	while(!empty(&s)) {
	       	num=pop(&s);
	       	printf("%d",num);
	       }
		
}
