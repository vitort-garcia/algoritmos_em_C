#include <stdio.h>
#include <locale.h>

float val;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Conversor de Real para D�lar \n");
	printf("============================ \n");
	
	printf("Digite o valor em BRL: ");
	scanf("%f", &val);
	printf("\n");
	
	printf("Em reais: R$%.2f \n", val);
	printf("Em d�lar: $%.2f", val/5.2);
	
	return 0;	
}
