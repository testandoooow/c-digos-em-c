#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int n1,n2;
    char operacao;
    char resposta[250];
    float resultado;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro n�mero: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d",&n2);

    fflush(stdin);

    printf("Escolha uma das opera��es a seguir: +, -, *, /\n");
    scanf("%c",&operacao);

    switch(operacao){
        case '+':
        resultado = n1 + n2;
        strcpy(resposta, "+ : ");
        break;
        case '-':
        resultado = n1 - n2;
        strcpy(resposta, "- : ");
        break;
        case '*':
        resultado = n1 * n2;
        strcpy(resposta, "* : ");
        break;
        case '/':
        resultado = (n1 + n2)/2;
        strcpy(resposta, "/ : ");
        break;
        default:
        strcpy(resposta, "Op��o inv�lida.");
    }

    printf("%s %d",resposta,resultado);
    return 0;
    }