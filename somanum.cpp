#include<stdio.h>
#include<stdlib.h>


int soma(int a, int b);

int main (){
	
	int valor1,valor2;
	printf("Digite o primeiro valor");
	scanf("%d",&valor1);
	printf("Digite o segundo valor");
	scanf("%d",&valor2);


	printf("O resultado eh:%d", soma(valor1 , valor2));
	
	

	return 0;
	
	
}




int soma(int a, int b)
{
	return a+b;
}

