#include <stdio.h>
#include <locale.h>

int dias;
float dist, preco;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("LOCADORA DE CARROS \n");
	printf("------------------ \n");
	
	printf("Por quantos dias o carro foi alugado? ");
	scanf("%d", &dias);
	printf("\n");
	
	printf("Quantos KM o carro rodou? ");
	scanf("%f", &dist);
	printf("\n");
	
	preco = 90*dias + 0.2*dist;
	
	printf("O preço final será de: R$%.2f", preco);
	
	return 0;
}
