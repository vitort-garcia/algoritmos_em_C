#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float alt, peso, imc;
	
	printf("VERIFICAR SEU IMC \n");
	printf("----------------- \n");
	
	printf("Digite a sua altura em metros: ");
	scanf("%f", &alt);
	
	printf("Digite o seu peso em KG: ");
	scanf("%f", &peso);
	printf("\n");
	
	imc = peso/(alt*alt);
	
	printf("Seu IMC é de %.2f \n", imc);
	if(imc <= 18.5){
		printf("Você está abaixo do peso ideal.");
	}else if(imc > 18.5 && imc < 25){
		printf("Você está no peso ideal.");
	}else if(imc >= 25 && imc < 30){
		printf("Você está acima do peso ideal.");
	}else if(imc >= 30 && imc < 40){
		printf("Você está obeso.");
	}else if(imc >= 40){
		printf("Você está com obesidade móribda.");
	}else{
		printf("ALGO OCORREU ERRADO, IMC INVÁLIDO.");
	}
	
	return 0;
}
