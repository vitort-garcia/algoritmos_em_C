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
		printf("O ano %d � BISSEXTO", ano);
	}else{
		printf("O ano %d n�o � BISSEXTO", ano);
	}
	
	return 0;
}
