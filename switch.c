#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    printf("Digite um n�mero: ");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("Picanha: 25,00");
        break;
        case 2:
        printf("Lasanha: 20,00");
        break;
        case 3:
        printf("Strogonoff: 18,00");
        break;
        case 4:
        printf("Bife acebolado: 15,00");
        break;
        case 5:
        printf("P�o com ovo: 5,00");
        break; 
        default: //� como o comando "outrocaso" no visualg
        printf("Op��o inv�lida.");
        break;
    }

    return 0;
    }