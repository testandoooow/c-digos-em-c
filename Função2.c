#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int quantidadePar(int numero[]){
	int par = 0, i;
	
	for(i = 0; i < 6; i++){
	if(numero[i] % 2 == 0){
		par++;
	}
	}

		return par;
	}

int quantidadeImpar(int numero[]){
	int impar = 0, i;
	
	for(i = 0; i < 6; i++){
	if(numero[i] % 2 != 0){
		impar++;
	}
}

return impar;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero[6], i, par = 0, impar = 0;
	
	for(i = 0; i < 6; i++){
		printf("Digite o %dº número: ",i + 1);
		scanf("%d",&numero[i]);
	}
	
	par = quantidadePar(numero);
	impar = quantidadeImpar(numero);
	
	printf("Quantidade de números pares: %d\n",par);
	printf("Quantidade de números impares: %d\n",impar);
	return 0;
}
