#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valorimovel, sal, prest;
	int anosp;
	
	printf("VERIFICADOR DE FINANCIAMENTO IMOBILIÁRIO \n");
	printf("---------------------------------------- \n");
	
	printf("Digite o valor do imóvel: R$");
	scanf("%f", &valorimovel);
	
	printf("Digite o seu salário: R$");
	scanf("%f", &sal);
	
	printf("Digite em quantos anos deseja pagar: ");
	scanf("%d", &anosp);
	
	printf("\n");
	
	prest = valorimovel/(anosp*12);
	
	if(prest > (sal*0.3)){
		printf("SITUAÇÃO: FINANCIAMENTO NEGADO! \n");
		printf("MOTIVO: A PRESTAÇÃO MENSAL NÃO DEVE SER MAIOR DO QUE 30%% DO SEU SALÁRIO! \n");
		printf("PRESTAÇÃO: R$%.2f \n", prest);
		printf("30%% DO SEU SALÁRIO: R$%.2f", sal*0.3);
	}else{
		printf("SITUAÇÃO: FINANCIAMENTO APROVADO! \n");
		printf("PRESTAÇÃO: R$%.2f \n", prest);
	}
	
	return 0;
}
