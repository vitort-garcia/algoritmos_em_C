#include <stdio.h>
#include <locale.h>

int dias;
float sal;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("SALÁRIO POR DIA TRABALHADO \n");
	printf("========================== \n");
	
	printf("Quantos dias você trabalhou esse mês? ");
	scanf("%d", &dias);
	printf("\n");
		
	sal = dias*8*25;

	printf("Trabalhando %d dias esse mês, você receberá R$%.2f de salário.", dias, sal);

	return 0;
}
