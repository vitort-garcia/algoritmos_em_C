#include <stdio.h>
#include <locale.h>

float n1, n2, media;
int peso1, peso2;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("CALCULADORA DE MÉDIA: \n");
	
	printf("Digite a sua primeira nota:");
	scanf("%f", &n1);
	printf("Digite a sua segunda nota:");
	scanf("%f", &n2);
	
	printf("\n");
	printf("Qual o peso da sua primeira nota?");
	scanf("%d", &peso1);
	printf("Qual o peso da sua segunda nota?");
	scanf("%d", &peso2);
	printf("\n");
	
	media = (n1*peso1+n2*peso2) /(peso1 + peso2);
	
	printf("Sua média é: %.2f", media);
	
	return 0;
	
}
