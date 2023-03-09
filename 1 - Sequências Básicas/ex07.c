#include <stdio.h>
#include <locale.h>

float val;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Conversor de Real para Dólar \n");
	printf("============================ \n");
	
	printf("Digite o valor em BRL: ");
	scanf("%f", &val);
	printf("\n");
	
	printf("Em reais: R$%.2f \n", val);
	printf("Em dólar: $%.2f", val/5.2);
	
	return 0;	
}
