#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void num(int numero[]){
	int i, par = 0, impar = 0;
	
	for(i = 0; i < 6; i++){
		if(numero[i] % 2 == 0){
				par++;
			} else {
				impar++;
		}
	}
	printf("Quantidade de pares: %d\n",par);
	printf("Quantidade de impares: %d\n",impar);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero[6], i;
	
	for(i = 0; i < 6; i++){
	printf("Digite o %dº numero: ",i + 1);
	scanf("%d",&numero[i]);
}

	num(numero);

	return 0;
}
