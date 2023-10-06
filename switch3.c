#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int n1,n2;
    char operacao;
    char resposta[250];
    float resultado;

    setlocale(LC_ALL, "portuguese");

    printf("Digite o primeiro número: ");
    scanf("%d",&n1);
    printf("\nDigite o segundo número: ");
    scanf("%d",&n2);

    fflush(stdin);

    printf("Escolha uma das operações a seguir: +, -, *, /\n");
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
        strcpy(resposta, "Opção inválida.");
    }

    printf("%s %d",resposta,resultado);
    return 0;
    }