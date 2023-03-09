#include <stdio.h>
#include <locale.h>

float preco;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PROMOÇÃO DE 5%% \n");
	printf("============== \n");
	
	printf("Digite o valor original do produto: ");
	scanf("%f", &preco);
	printf("\n");
	
	printf("Com o desconto de 5%% o preço do produto fica: R$%.2f", preco*0.95);
}
