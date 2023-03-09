#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	
	printf("VERIFICAR SITUAÇÃO ESCOLAR \n");
	printf("========================== \n");
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media <= 4.9){
		printf("-------------------------------- \n");
		printf("MÉDIA: %.2f \n", media);
		printf("SITUAÇÃO: REPROVADO");
	}else if(media > 4.9 && media < 7){
		printf("-------------------------------- \n");
		printf("MÉDIA: %.2f \n", media);
		printf("SITUAÇÃO: RECUPERAÇÃO");
	}else{
		printf("-------------------------------- \n");
		printf("MÉDIA: %.2f \n", media);
		printf("SITUAÇÃO: APROVADO");
	}
	
	return 0;
}
