#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
EXERC�CIO:
37) Uma empresa precisa reajustar o sal�rio dos seus funcion�rios, dando um 
aumento de acordo com alguns fatores. Fa�a um programa que leia o sal�rio atual, 
o g�nero do funcion�rio e h� quantos anos esse funcion�rio trabalha na empresa. 
No final, mostre o seu novo sal�rio, baseado na tabela a seguir:
- Mulheres
 - menos de 15 anos de empresa: +5%
 - de 15 at� 20 anos de empresa: +12%
 - mais de 20 anos de empresa: +23%
- Homens
 - menos de 20 anos de empresa: +3%
 - de 20 at� 30 anos de empresa: +13%
 - mais de 30 anos de empresa: +25%
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int anos;
	float reaj, sal;
	char sexo[1];
	
	printf("REAJUSTE SAL�RIAL \n");
	printf("----------------- \n");
	
	printf("Digite seu sal�rio atual: R$");
	scanf("%f", &sal);
	
	printf("Digite h� quantos anos voc� est� na empresa: ");
	scanf("%d", &anos);
	
	printf("Digite o seu sexo (F ou M): ");
	scanf("%s", &sexo);
	
	if(anos <= 0){
		printf("TEMPO DE EMPRESA INV�LIDO PARA AUMENTO");
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
		printf("SEXO INV�LIDO.");
		return 0;
	}
	
	printf("\nO seu sal�rio passar� de R$%.2f para R$%.2f", sal, reaj);
	
	return 0;
}
