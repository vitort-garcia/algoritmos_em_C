#include <stdio.h>
#include <locale.h>

int n1, n2;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	printf("SOMADOR DE NÚMEROS: \n\n");
	printf("Digite o primeiro número a ser somado:");
	scanf("%d", &n1);
	printf("Digite o segundo número a ser somado:");
	scanf("%d", &n2);
	printf("\n");
	printf("A somatória de %d com %d é igual a %d", n1, n2, n1 + n2);
	
	return 0;	
}
