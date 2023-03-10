#include <stdio.h>
#include <locale.h>

/*
EXERC�CIO:
36) Um programa de vida saud�vel quer dar pontos atividades f�sicas que podem 
ser trocados por dinheiro. O sistema funciona assim:
 - Cada hora de atividade f�sica no m�s vale pontos
 - at� 10h de atividade no m�s: ganha 2 pontos por horaw
 - de 10h at� 20h de atividade no m�s: ganha 5 pontos por hora
 - acima de 20h de atividade no m�s: ganha 10 pontos por hora
 - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
Fa�a um programa que leia quantas horas de atividade uma pessoa teve por m�s, 
calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int horas;
	float valor, pontos;
	
	printf("EXERC�CIO PARA GANHAR \n");
	printf("--------------------- \n");
	
	printf("Digite quantas horas voc� se exercitou este m�s: ");
	scanf("%d", &horas);
	
	
	if(horas < 10){
		pontos = horas*2;
	}else if(horas >= 10 && horas <= 20){
		pontos = horas*5;
	}else if(horas > 20){
		pontos = horas*10;
	}
	
	valor = pontos*0.05;
	printf("Voc� recebeu R$%.2f este m�s", valor);
	
	return 0;
}
