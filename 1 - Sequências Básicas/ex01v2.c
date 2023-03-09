#include <stdio.h>
#include <locale.h> //biblioteca para definição de configurações locais

float sal;
char nome[15];

int main(void){
	
	setlocale(LC_ALL, "Portuguese"); // Definição para o uso de caracteres em português.
	
	printf("LEITOR DE SALÁRIO \n");
	printf("================= \n");
	printf("Qual o seu nome? ");
	scanf("%s", &nome);
	printf("Qual o seu salário? ");
	scanf("%f", &sal);
	printf("Você se chama %s e recebe R$%.2f por mês.", nome, sal);
	
	return 0;
}
