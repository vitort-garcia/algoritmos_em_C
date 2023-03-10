#include <stdio.h>
#include <locale.h>

/*
EXERCÍCIO:
36) Um programa de vida saudável quer dar pontos atividades físicas que podem 
ser trocados por dinheiro. O sistema funciona assim:
 - Cada hora de atividade física no mês vale pontos
 - até 10h de atividade no mês: ganha 2 pontos por horaw
 - de 10h até 20h de atividade no mês: ganha 5 pontos por hora
 - acima de 20h de atividade no mês: ganha 10 pontos por hora
 - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
Faça um programa que leia quantas horas de atividade uma pessoa teve por mês, 
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float valor, pontos;
	
	printf("EXERCÍCIO PARA GANHAR \n");
	printf("--------------------- \n");
	
	printf("Digite quantas horas você se exercitou este mês: ");
	scanf("%d", &horas);
	
	
	if(horas < 10){
		pontos = horas*2;
	}else if(horas >= 10 && horas <= 20){
		pontos = horas*5;
	}else if(horas > 20){
		pontos = horas*10;
	}
	
	valor = pontos*0.05;
	printf("Você recebeu R$%.2f este mês", valor);
	
	return 0;
}
