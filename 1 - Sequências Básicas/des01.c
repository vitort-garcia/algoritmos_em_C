#include <stdio.h>
#include <locale.h>

int anosf, cigd;
float anosp;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("QUANTOS DIAS DE VIDA UM FUMANTE PERDEU? \n");
	printf("======================================= \n");
	
	printf("Quantos cigarros ele fuma por dia? ");
	scanf("%d", &cigd);
	printf("\n");
	
	printf("Há quantos anos ele fuma? ");
	scanf("%d", &anosf);
	printf("\n");
	
	anosp = (10*(cigd*(anosf*365)))/1440;
	
	printf("O fumante em questão já perdeu %.2f dias de vida.", anosp);
	
	return 0;
}
