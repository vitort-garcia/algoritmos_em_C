#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valorimovel, sal, prest;
	int anosp;
	
	printf("VERIFICADOR DE FINANCIAMENTO IMOBILI�RIO \n");
	printf("---------------------------------------- \n");
	
	printf("Digite o valor do im�vel: R$");
	scanf("%f", &valorimovel);
	
	printf("Digite o seu sal�rio: R$");
	scanf("%f", &sal);
	
	printf("Digite em quantos anos deseja pagar: ");
	scanf("%d", &anosp);
	
	printf("\n");
	
	prest = valorimovel/(anosp*12);
	
	if(prest > (sal*0.3)){
		printf("SITUA��O: FINANCIAMENTO NEGADO! \n");
		printf("MOTIVO: A PRESTA��O MENSAL N�O DEVE SER MAIOR DO QUE 30%% DO SEU SAL�RIO! \n");
		printf("PRESTA��O: R$%.2f \n", prest);
		printf("30%% DO SEU SAL�RIO: R$%.2f", sal*0.3);
	}else{
		printf("SITUA��O: FINANCIAMENTO APROVADO! \n");
		printf("PRESTA��O: R$%.2f \n", prest);
	}
	
	return 0;
}
