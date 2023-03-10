#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float larg, comp, area;
	
	printf("AVALIAÇÃO DO TERRENO \n");
	printf("---------------- \n");
	
	printf("Digite a largura em metros do terreno: ");
	scanf("%f", &larg);
	
	printf("Digite o comprimento em metros do terreno: ");
	scanf("%f", &comp);
	printf("\n");
	
	area = larg*comp;
	
	if(area < 100){
		printf("-------------------------------- \n");
		printf("AREA: %.2fm \n", area);
		printf("TERRENO POPULAR");
	}else if(area >= 100 && area <= 500){
		printf("-------------------------------- \n");
		printf("AREA: %.2fm \n", area);
		printf("TERRENO MASTER");
	}else{
		printf("-------------------------------- \n");
		printf("AREA: %.2fm \n", area);
		printf("TERRENO VIP");
	}
	
	return 0;
}
