#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	char disciplina[3][250];
	float nota[3][3], media[3], soma, peso[3] = {3, 3, 4}, somaPeso = 0;
	int i, j;
	
	
	for(i = 0; i < 3; i++){
		printf("Escreva o nome da disciplina: ");
		gets(disciplina[i]);
		
		for(j = 0; j < 3; j++){
			printf("Digite a %dª nota: ",j + 1);
			scanf("%f",&nota[i][j]);
			somaPeso += peso[j];
			soma += nota[i][j] * peso[j];
		}
		media[i] = soma / somaPeso;
		soma = 0;
		fflush(stdin);	
	}


	for(i = 0; i < 3; i++){
		printf("Disciplina: %s\n",disciplina[i]);
	printf("Media: %.1f\n",media[i]);
}
	
	return 0;
}
