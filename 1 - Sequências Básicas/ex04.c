#include <stdio.h>
#include <locale.h>

int n1;

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("SUCESSOR E ANTECESSOR \n");
	printf("===================== \n");
	
	printf("Digite o número que você deseja saber o sucessor e antecessor:");
	scanf("%d", &n1);
	printf("\n");
	printf("Sucessor: %d \n", n1+1);
	printf("Antecessor: %d", n1-1);
		
	return 0;
}
