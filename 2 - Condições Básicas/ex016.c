#include <stdio.h>
#include <locale.h>

float n1, n2, media;
char nome[15];

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("NOME E SITUA��O \n");
	printf("=============== \n");
	
	printf("Ol�! Digite o seu nome: ");
	scanf("%s", &nome);
	printf("\n");
	
	printf("Digite a sua primeira nota: ");
	scanf("%f", &n1);
	printf("\n");
	
	printf("Digite a sua segunda nota: ");
	scanf("%f", &n2);
	printf("\n");
	
	media = (n1 + n2)/2;
	
	if(media < 7){
		printf("%s: REPROVADO!", nome);
	}else{
		printf("%s: APROVADO!", nome);
	}
	
	return 0;
}
