#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	
	printf("VERIFICAR SITUA��O ESCOLAR \n");
	printf("========================== \n");
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media <= 4.9){
		printf("-------------------------------- \n");
		printf("M�DIA: %.2f \n", media);
		printf("SITUA��O: REPROVADO");
	}else if(media > 4.9 && media < 7){
		printf("-------------------------------- \n");
		printf("M�DIA: %.2f \n", media);
		printf("SITUA��O: RECUPERA��O");
	}else{
		printf("-------------------------------- \n");
		printf("M�DIA: %.2f \n", media);
		printf("SITUA��O: APROVADO");
	}
	
	return 0;
}
