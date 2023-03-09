#include <stdio.h>
#include <locale.h>

float dist, preco;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PREÇO DE VIAGEM \n");
	printf("=============== \n");
	
	printf("Digite a distância percorrida em KM: ");
	scanf("%f", &dist);
	printf("\n");
	
	if(dist <= 200){
		preco = dist*0.5;
		printf("Numa viagem de %.2fKM é cobrado R$%.2f.", dist, preco);
	}else{
		preco = 100+((dist-200)*0.40);
		printf("Numa viagem de %.2fKM é cobrado R$%.2f.", dist, preco);
	}
	
	return 0;
}
