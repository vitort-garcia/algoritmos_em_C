#include <stdio.h>
#include <locale.h>

int id;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("ALISTAMENTO MILITAR \n");
	printf("=================== \n");
	
	printf("Digite sua idade em anos: ");
	scanf("%d", &id);
	printf("\n");
	
	if(id < 18){
		printf("Falta(m) %d ano(s) para o seu alistamento.", 18-id);
	}else if(id > 18){
		printf("Voc� se alistou h� %d ano(s).", id-18);
	}else{
		printf("Voc� deve se alistar este ano.");
	}
	
	return 0;
}
