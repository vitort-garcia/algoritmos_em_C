#include <stdio.h>
#include <locale.h>

float valA, valB, valC;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("DELTA de uma Equa��o de 2� Grau: \n");
	printf("================================ \n");
	
	printf("Digite o valor de A: ");
	scanf("%f", &valA);
	printf("\n");
	
	printf("Digite o valor de B: ");
	scanf("%f", &valB);
	printf("\n");
	
	printf("Digite o valor de C: ");
	scanf("%f", &valC);
	printf("\n");
	
	printf("O valor do seu DELTA �: %.2f", valB*valB - (4*valA*valC));
	
	return 0;
}
