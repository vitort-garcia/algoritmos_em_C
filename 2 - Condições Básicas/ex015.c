#include <stdio.h>
#include <locale.h>

int nasc;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PERMISSÃO PARA VOTAR \n");
	printf("==================== \n");
	
	printf("Qual o seu ano de nascimento?");
	scanf("%d", &nasc);
	printf("\n");
	
	if(2023-nasc >= 16 && 2023-nasc < 18){
		printf("Você tem idade suficiente para votar.");
	}else if(2023-nasc >= 18){
		printf("Você tem a obrigação de votar.");
	}else{
		printf("Você não tem a idade mínima para votar.");
	}
	
	return 0;
}
