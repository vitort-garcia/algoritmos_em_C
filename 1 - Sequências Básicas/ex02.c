#include <stdio.h>
#include <locale.h>

int n1, n2;

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	printf("SOMADOR DE N�MEROS: \n\n");
	printf("Digite o primeiro n�mero a ser somado:");
	scanf("%d", &n1);
	printf("Digite o segundo n�mero a ser somado:");
	scanf("%d", &n2);
	printf("\n");
	printf("A somat�ria de %d com %d � igual a %d", n1, n2, n1 + n2);
	
	return 0;	
}
