#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
EXERCÍCIO:
37) Uma empresa precisa reajustar o salário dos seus funcionários, dando um 
aumento de acordo com alguns fatores. Faça um programa que leia o salário atual, 
o gênero do funcionário e há quantos anos esse funcionário trabalha na empresa. 
No final, mostre o seu novo salário, baseado na tabela a seguir:
- Mulheres
 - menos de 15 anos de empresa: +5%
 - de 15 até 20 anos de empresa: +12%
 - mais de 20 anos de empresa: +23%
- Homens
 - menos de 20 anos de empresa: +3%
 - de 20 até 30 anos de empresa: +13%
 - mais de 30 anos de empresa: +25%
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int anos;
	float reaj, sal;
	char sexo[1];
	
	printf("REAJUSTE SALÁRIAL \n");
	printf("----------------- \n");
	
	printf("Digite seu salário atual: R$");
	scanf("%f", &sal);
	
	printf("Digite há quantos anos você está na empresa: ");
	scanf("%d", &anos);
	
	printf("Digite o seu sexo (F ou M): ");
	scanf("%s", &sexo);
	
	if(anos <= 0){
		printf("TEMPO DE EMPRESA INVÁLIDO PARA AUMENTO");
		return 0;
	}
	
	if(strcmp(sexo, "F") == 0){
		
		if(anos < 15 && anos > 0){
			reaj = sal+(sal*0.05);
		}else if(anos >= 15 && anos <= 20){
			reaj = sal+(sal*0.123);
		}else{
			reaj = sal+(sal*0.2);
		}
		
	}else if(strcmp(sexo, "M") == 0){
		
		if(anos < 20){
			reaj = sal+(sal*0.03);
		}else if(anos >= 20 && anos <= 30){
			reaj = sal+(sal*0.13);
		}else{
			reaj = sal+(sal*0.25);
		}
		
	}else{
		printf("SEXO INVÁLIDO.");
		return 0;
	}
	
	printf("\nO seu salário passará de R$%.2f para R$%.2f", sal, reaj);
	
	return 0;
}
