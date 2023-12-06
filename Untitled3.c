#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int somar(int a, int b){
	int soma; 
	soma = a + b;
	
	return soma;
}

int subtrair(int a, int b){
	int subtracao;
	subtracao = a - b;
	if(b > a){
		subtracao = b - a;
	}
	return subtracao;
}

float dividir(int a, int b){
	float soma;
	soma = a + b;
	float dividir;
	dividir = soma / 2; 
	return dividir;
}

int multiplicar(int a, int b){
	int multiplicacao;
	multiplicacao = a * b;
	return multiplicacao;
}


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numero, numero2, i, soma, subtracao, multiplicacao;
	float divisao;
	
	printf("Digite o primeiro número: ");
	scanf("%d",&numero);
	printf("Digite o segundo número: ");
	scanf("%d",&numero2);
	
	soma = somar(numero, numero2);
	subtracao = subtrair(numero, numero2);
	divisao = dividir(numero, numero2);
	multiplicacao = multiplicar(numero, numero2);
	
	printf("Soma: %d\n",soma);
	printf("Subtração: %d\n",subtracao);
	printf("Divisão: %.1f\n",divisao);
	printf("Multiplicação: %d",multiplicacao);
	
	return 0;
}
