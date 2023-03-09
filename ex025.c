#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int temp;
	float sal;
	char nome[15];
	
	printf("REAJUSTE SAL�RIAL ANUAL \n");
	printf("----------------------- \n");
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("\n");
	
	printf("Digite seu salario atual: ");
	scanf("%f", &sal);
	printf("\n");
	
	printf("Digite h� quantos anos voc� trabalha conosco, %s: ", nome);
	scanf("%d", &temp);
	printf("\n");
	
	if(temp < 1){
		printf("N�o h� promo��es para menos de um ano de trabalho conosco.");
	}else if(temp < 3){
		printf("%s A sua promo��o ser� de 3%% este ano. Seu sal�rio: R$%.2f", nome, sal+(sal*0.03));
	}else if(temp >= 3 && temp < 10){
		printf("%s A sua promo��o ser� de 12,5%% este ano. Seu sal�rio: R$%.2f", nome, sal+(sal*0.125));
	}else{
		printf("%s A sua promo��o ser� de 20%% este ano. Seu sal�rio: R$%.2f", nome, sal+(sal*0.20));
	}
	
	
	return 0;
}
