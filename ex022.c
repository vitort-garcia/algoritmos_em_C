#include <stdio.h>
#include <locale.h>

float n1, n2;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("COMPARADOR DE N�MEROS: \n");
	printf("====================== \n");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);
	printf("\n");
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	printf("\n");
	
	if(n1 > n2){
		printf("O primeiro n�mero digitado � maior.");
	}else if(n2 > n1){
		printf("O segundo n�mero digitado � maior.");
	}else{
		printf("Os n�meros tem o mesmo valor.");
	}
	
	return 0;
}
