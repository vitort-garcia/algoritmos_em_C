#include <stdio.h>
#include <locale.h>

float dist;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Conversor de Metros: \n");
	printf("==================== \n");
	
	printf("Digite uma distância em metros:");
	scanf("%f", &dist);
	printf("\n");
	
	printf("A distância de %.2f metros corresponde a: \n", dist);
	printf("%.2f Km \n", dist/1000);
	printf("%.2f Hm \n", dist/100);
	printf("%.2f Dam \n", dist/10);
	printf("%.2f dm \n", dist*10);
	printf("%.2f cm \n", dist*100);
	printf("%.2f mm", dist*1000);
	
	return 0;
}
