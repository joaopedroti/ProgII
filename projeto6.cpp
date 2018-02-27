#include<stdio.h>
#include<stdlib.h>




int menu()
{
	int num;
	printf("************\n\nCalculadora\n\n************");
	printf("\n\n1-Soma");
	printf("\n\n2-Subtracao");
    printf("\n\n0-Sair");	
    printf("\n\n************");
     printf("\n\nEscolha uma opcao:");
	 scanf("%d",&num);	  
	
	if(num==1)
	printf("Soma");
	
	if(num==2)
	printf("Subtracao");
	
	if(num==0)
	printf("Sair");
	
	if (num>2)
	printf("Numero invalido");

	
}






int main (){
	
	
	
	menu();
	
	
	return 0;
}
