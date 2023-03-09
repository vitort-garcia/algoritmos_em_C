#include <stdio.h>
#include <locale.h>

char nome[15], sexo[1], mul[1] = "F";
int desc;
float preco, precof;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("PROMOÇÃO DIA DA MULHER \n");
	printf("====================== \n");
	
	printf("Olá. Digite o seu nome: ");
	scanf("%s", &nome);
	printf("\n");
	
	printf("Digite o seu sexo %s (F ou M): ", nome);
	scanf("%s", &sexo);
	printf("\n");
	
	printf("Digite o valor das suas compras em R$");
	scanf("%f", &preco);
	printf("\n");
	
	if(strcmp(sexo, mul) == 0){
		desc = preco*0.13;
		precof = preco-desc;
		printf("Você terá um desconto de 13%% e pagará um valor final de R$%.2f", precof);
	}else{
		desc = preco*0.05;
		precof = preco-desc;
		printf("Você terá um desconto de 5%% e pagará um valor final de R$%.2f", precof);
	}
	
	return 0;
}
