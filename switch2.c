#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    int mes;
    printf("Digite um n�mero: ");
    scanf("%d",&mes);

    switch(mes){
        case 1:
        case 7:
        printf("Fim de semana");
        break; //o comando break encerra o comando escolha se a op��o caso for verdadeira.
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        printf("Dia �til.");
        break;
        default: //funciona como o comando "outrocaso" no visualg
        printf("Op��o inv�lida.");
        break;
    }

    return 0;
    }