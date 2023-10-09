#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float altura, pesoIdeal;

    printf("Digite um caracter correspondente ao seu sexo. M - Masculino, F - Feminino.\n");
    scanf("%c",&sexo);

    printf("Digite sua altura: \n");
    scanf("%f",&altura);

    //convertendo o caracter em maiusculo
    sexo = toupper(sexo);

    switch(sexo){
        case 'M':
        pesoIdeal = (72.7 * altura) - 58;
        break;

        case 'F':
        pesoIdeal = (62.1 * altura) - 44.7;
        break;

        default:
        printf("Opção inválida.");
    }

    printf("Peso ideal: %.2f",pesoIdeal);
    return 0;
}