#include <stdio.h>
#include <locale.h>

float n1, n2;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("COMPARADOR DE NÚMEROS: \n");
	printf("====================== \n");
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	printf("\n");
	
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	printf("\n");
	
	if(n1 > n2){
		printf("O primeiro número digitado é maior.");
	}else if(n2 > n1){
		printf("O segundo número digitado é maior.");
	}else{
		printf("Os números tem o mesmo valor.");
	}
	
	return 0;
}
