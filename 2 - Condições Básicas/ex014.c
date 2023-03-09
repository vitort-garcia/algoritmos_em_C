#include <stdio.h>
#include <locale.h>

float vel, mul;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("VERIFICADOR DE MULTA \n");
	printf("==================== \n");
	
	printf("Qual era a velocidade do carro em KM/h? ");
	scanf("%f", &vel);
	printf("\n");
	
	if(vel > 80){
		mul = (vel - 80)*5;
		printf("EXCEDEU O LIMITE! (80KM/h) \n");
		printf("Deve ser aplicada uma multa de R$%.2f", mul);
	}else{
		printf("NÃO EXCEDEU O LIMITE! (80KM/h)");
	}
	
	return 0;
}
