#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float val1, val2, val3;
	
	printf("CATEGORIZANDO TRI�NGULO \n");
	printf("----------------------- \n");
	
	printf("Digite o valor do primeiro lado do tri�ngulo: ");
	scanf("%f", &val1);
	
	printf("Digite o valor do segundo lado do tri�ngulo: ");
	scanf("%f", &val2);
	
	printf("Digite o valor do terceiro lado do tri�ngulo: ");
	scanf("%f", &val3);
	printf("\n");
	
	if(val1 < val2 + val3 && val2 < val1 + val3 && val3 < val1 + val2){
		if(val1 == val2 && val2 == val3){
			printf("� poss�vel formar um tri�ngulo com estes lados. \n");
			printf("Tendo todos lados iguais, seu tri�ngulo ser� EQUIL�TERO.");
		}else if((val1 == val2 && val1 != val3) || (val1 == val3 && val1 != val2) || (val2 == val3 && val2 != val1)){
			printf("� poss�vel formar um tri�ngulo com estes lados. \n");
			printf("Tendo dois lados iguais, seu tri�ngulo ser� IS�SCELES.");
		}else if(val1 != val2 && val2 != val3){
			printf("� poss�vel formar um tri�ngulo com estes lados. \n");
			printf("Tendo todos os lados diferentes, seu tri�ngulo ser� ESCALENO.");
		}
	}else{
		printf("N�O � POSS�VEL FORMAR UM TRI�NGULO COM ESTES VALORES");
	}
	
	return 0;
}
