#include <stdio.h>
#include <locale.h>

int n1;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PAR OU �MPAR? \n");
	printf("============= \n");
	
	printf("N�mero INTEIRO que deseja testar: ");
	scanf("%d", &n1);
	printf("\n");
	
	if(n1%2 == 0){
		printf("O n�mero %d � par.", n1);
	}else{
		printf("O n�mero %d � �mpar.", n1);
	}
}
