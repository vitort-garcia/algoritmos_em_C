#include <stdio.h>
#include <locale.h>

int nasc;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PERMISS�O PARA VOTAR \n");
	printf("==================== \n");
	
	printf("Qual o seu ano de nascimento?");
	scanf("%d", &nasc);
	printf("\n");
	
	if(2023-nasc >= 16 && 2023-nasc < 18){
		printf("Voc� tem idade suficiente para votar.");
	}else if(2023-nasc >= 18){
		printf("Voc� tem a obriga��o de votar.");
	}else{
		printf("Voc� n�o tem a idade m�nima para votar.");
	}
	
	return 0;
}
