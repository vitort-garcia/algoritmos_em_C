#include <stdio.h>
#include <locale.h>

int n1;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PAR OU ÍMPAR? \n");
	printf("============= \n");
	
	printf("Número INTEIRO que deseja testar: ");
	scanf("%d", &n1);
	printf("\n");
	
	if(n1%2 == 0){
		printf("O número %d é par.", n1);
	}else{
		printf("O número %d é ímpar.", n1);
	}
}
