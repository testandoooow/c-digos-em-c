#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float medir(int a){
	int centimetro = a * 100;
	return centimetro;
}


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int metros; 
	int converter;
	printf("Digite o valor em metros: ");
	scanf("%d",&metros);
	
	converter = medir(metros);
	printf("Convertendo %d em centímetros... %d = %d",metros, metros, converter);
	return 0;
}
