#include <stdio.h>
#include <locale.h>

float r1, r2, r3;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("� POSS�VEL FORMAR TRI�NGULO? \n");
	printf("============================ \n");
	
	printf("Digite o tamanho da primeira reta: ");
	scanf("%f", &r1);
	printf("\n");
	
	printf("Digite o tamanho da segunda reta: ");
	scanf("%f", &r2);
	printf("\n");
	
	printf("Digite o tamanho da terceira reta: ");
	scanf("%f", &r3);
	printf("\n");
	
	if(r1 < r2+r3 && r2 < r1+r3 && r3 < r1+r2){
		printf("Sim, � possivel formar um tri�ngulo com retas destes tamanhos.");
	}else{
		printf("N�o � poss�vel formar um tri�ngulo com retas destes tamanhos.");
	}
	
	return 0;
}
