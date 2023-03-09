#include <stdio.h>
#include <locale.h>

float lar, alt;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Tinta necessária \n");
	printf("================ \n");
	
	printf("Qual a largura da sua parede em metros? ");
	scanf("%f", &lar);
	printf("\n");
	
	printf("Qual a altura da sua parede em metros? ");
	scanf("%f", &alt);
	printf("\n");
	
	printf("Para pintar uma parede de %.2fm² serão necessários %.2fL de tinta.", lar*alt, lar*alt/2);
	
	return 0;
}
