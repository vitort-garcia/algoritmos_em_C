#include <stdio.h>
#include <locale.h>

int dias;
float sal;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("SAL�RIO POR DIA TRABALHADO \n");
	printf("========================== \n");
	
	printf("Quantos dias voc� trabalhou esse m�s? ");
	scanf("%d", &dias);
	printf("\n");
		
	sal = dias*8*25;

	printf("Trabalhando %d dias esse m�s, voc� receber� R$%.2f de sal�rio.", dias, sal);

	return 0;
}
