#include <stdio.h>
#include <locale.h>

float r1, r2, r3;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("É POSSÍVEL FORMAR TRIÂNGULO? \n");
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
		printf("Sim, é possivel formar um triângulo com retas destes tamanhos.");
	}else{
		printf("Não é possível formar um triângulo com retas destes tamanhos.");
	}
	
	return 0;
}
