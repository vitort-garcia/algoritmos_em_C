#include <stdio.h>
#include <locale.h> //biblioteca para defini��o de configura��es locais

float sal;
char nome[15];

int main(void){
	
	setlocale(LC_ALL, "Portuguese"); // Defini��o para o uso de caracteres em portugu�s.
	
	printf("LEITOR DE SAL�RIO \n");
	printf("================= \n");
	printf("Qual o seu nome? ");
	scanf("%s", &nome);
	printf("Qual o seu sal�rio? ");
	scanf("%f", &sal);
	printf("Voc� se chama %s e recebe R$%.2f por m�s.", nome, sal);
	
	return 0;
}
