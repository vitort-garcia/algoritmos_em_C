#include <stdio.h>
#include <locale.h>

float sal;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("AUMENTO DE 15%% NO SAL�RIO \n");
	printf("========================= \n");
	
	printf("Digite o seu sal�rio atual: R$");
	scanf("%f", &sal);
	printf("\n");
	
	printf("O seu sal�rio com um aumento de 15%% se tornar�: R$%.2f", sal*1.15);
	
}
