#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){
  setlocale(LC_ALL, "portuguese");
  
  int i, contador = 0, soma = 0;
  float nota, media;
  char resultado[250];
  
  for(i = 1; i <= 3; i++){
  	do{
  	printf("Digite a %d nota: ",i);
  	scanf("%f",&nota);
  	soma += nota;
  } while(nota < 0 || nota > 10);
  contador = i;
}

media = soma / contador;

if(media >= 7){
	strcpy(resultado, "Aprovado!");
} else if(media >= 5){
	strcpy(resultado, "Recuperação!");
} else {
	strcpy(resultado, "Reprovado!");
}

printf("\n%d",contador);
printf("\nMedia: %f",media);
printf("\n%s",resultado);

  return 0;
}
