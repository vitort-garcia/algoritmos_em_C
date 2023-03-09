#include <stdio.h>
#include <locale.h>

int ano;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("VERIFICADOR DE ANO BISSEXTO \n");
	printf("=========================== \n");
	
	printf("ANO: ");
	scanf("%d", &ano);
	printf("\n");
	
	if(ano%4 == 0){
		printf("O ano %d é BISSEXTO", ano);
	}else{
		printf("O ano %d não é BISSEXTO", ano);
	}
	
	return 0;
}
