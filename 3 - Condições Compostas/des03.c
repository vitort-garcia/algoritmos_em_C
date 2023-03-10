#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float val1, val2, val3;
	
	printf("CATEGORIZANDO TRIÂNGULO \n");
	printf("----------------------- \n");
	
	printf("Digite o valor do primeiro lado do triângulo: ");
	scanf("%f", &val1);
	
	printf("Digite o valor do segundo lado do triângulo: ");
	scanf("%f", &val2);
	
	printf("Digite o valor do terceiro lado do triângulo: ");
	scanf("%f", &val3);
	printf("\n");
	
	if(val1 < val2 + val3 && val2 < val1 + val3 && val3 < val1 + val2){
		if(val1 == val2 && val2 == val3){
			printf("É possível formar um triângulo com estes lados. \n");
			printf("Tendo todos lados iguais, seu triângulo será EQUILÁTERO.");
		}else if((val1 == val2 && val1 != val3) || (val1 == val3 && val1 != val2) || (val2 == val3 && val2 != val1)){
			printf("É possível formar um triângulo com estes lados. \n");
			printf("Tendo dois lados iguais, seu triângulo será ISÓSCELES.");
		}else if(val1 != val2 && val2 != val3){
			printf("É possível formar um triângulo com estes lados. \n");
			printf("Tendo todos os lados diferentes, seu triângulo será ESCALENO.");
		}
	}else{
		printf("NÃO É POSSÍVEL FORMAR UM TRIÂNGULO COM ESTES VALORES");
	}
	
	return 0;
}
