#include <stdio.h>
#include <locale.h>

float sal;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("AUMENTO DE 15%% NO SALÁRIO \n");
	printf("========================= \n");
	
	printf("Digite o seu salário atual: R$");
	scanf("%f", &sal);
	printf("\n");
	
	printf("O seu salário com um aumento de 15%% se tornará: R$%.2f", sal*1.15);
	
}
