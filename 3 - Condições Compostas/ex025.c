#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int temp;
	float sal;
	char nome[15];
	
	printf("REAJUSTE SALÁRIAL ANUAL \n");
	printf("----------------------- \n");
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("\n");
	
	printf("Digite seu salario atual: ");
	scanf("%f", &sal);
	printf("\n");
	
	printf("Digite há quantos anos você trabalha conosco, %s: ", nome);
	scanf("%d", &temp);
	printf("\n");
	
	if(temp < 1){
		printf("Não há promoções para menos de um ano de trabalho conosco.");
	}else if(temp < 3){
		printf("%s A sua promoção será de 3%% este ano. Seu salário: R$%.2f", nome, sal+(sal*0.03));
	}else if(temp >= 3 && temp < 10){
		printf("%s A sua promoção será de 12,5%% este ano. Seu salário: R$%.2f", nome, sal+(sal*0.125));
	}else{
		printf("%s A sua promoção será de 20%% este ano. Seu salário: R$%.2f", nome, sal+(sal*0.20));
	}
	
	
	return 0;
}
