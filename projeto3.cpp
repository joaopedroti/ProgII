#include<stdio.h>
#include<stdlib.h>

void contagem_regressiva(int ini, int fim)
{
	
	int i;
	for(i=ini;i>=fim;i--){
	
	printf("\n%d", i);
}
	printf("\nBoom!!");
	
	
	
	
	
	
	
}


int main ()
{
	
	
	contagem_regressiva(10,8);
	contagem_regressiva(5,2);
	contagem_regressiva(8,1);
	
	return 0;	
	
}
