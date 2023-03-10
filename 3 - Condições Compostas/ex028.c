#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int tipcar, dias, diar;
	float kmrodado, precof;
	
	printf("ALUGUEL DE CARROS \n");
	printf("----------------- \n");
	
	printf("ESCOLHA O SEU TIPO DE CARRO\n");
	printf("CARRO POPULAR DIGITE:   [ 1 ]\n");
	printf("CARRO ESPORTIVO DIGITE: [ 2 ]\n\n");
	scanf("%d", &tipcar);
	
	if(tipcar == 1){
		printf("\nCARRO POPULAR SELECIONADO\n");
		printf("DIÁRIA: R$90\n\n");
		printf("Digite quantos dias você utilizou o carro: ");
		scanf("%d", &dias);
		
		diar = dias*90;
		
		printf("Digite quantos KM você rodou: ");
		scanf("%f", &kmrodado);
		
		if(kmrodado <= 100){
			precof = diar + (kmrodado*0.2);
			printf("Rodando %d dias com o carro popular por %.2fkm, você deverá pagar R$%.2f", dias, kmrodado, precof);
		}else{
			precof = diar + ((kmrodado-100)*0.1) + 20;
			printf("Rodando %d dias com o carro popular por %.2fkm, você deverá pagar R$%.2f", dias, kmrodado, precof);
		}
	}else if(tipcar == 2){
		printf("\nCARRO ESPORTIVO SELECIONADO\n");
		printf("DiÁRIA: R$150\n\n");
		printf("Digite quantos dias você utilizou o carro: ");
		scanf("%d", &dias);
		
		diar = dias*150;
		
		printf("Digite quantos KM você rodou: ");
		scanf("%f", &kmrodado);
		
		if(kmrodado <= 200){
			precof = diar + kmrodado*0.3;
			printf("Rodando %d dias com o carro esportivo por %.2fkm, você deverá pagar R$%.2f", dias, kmrodado, precof);
		}else{
			precof = diar + ((kmrodado-200)*0.25) + 60;
			printf("Rodando %d dias com o carro esportivo por %.2fkm, você deverá pagar R$%.2f", dias, kmrodado, precof);
		}
	}
	
	return 0;
}
