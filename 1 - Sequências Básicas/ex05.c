#include <stdio.h>
#include <locale.h>

float n1;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Dobro e Terça Parte \n");
	printf("=================== \n");
	
	printf("Digite o número:");
	scanf("%f", &n1);
	printf("\n");
	
	printf("O dobro: %.2f \n", n1*2);
	printf("A terça parte: %.2f", n1/3);
	
	return 0;
}
