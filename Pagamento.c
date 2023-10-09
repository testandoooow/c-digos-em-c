#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void){
    setlocale(LC_ALL, "portuguese");

    int pagamento, parcela;
    float produto, desconto, total;
    char resultado[250];

    printf("Digite o valor do produto: ");
    scanf("%f",&produto);

    printf("Escolha a forma de pagamento: 1 - vista, 2 - prazo: ");
    scanf("%d",&pagamento);

    switch(pagamento){
        case 1:
        strcpy(resultado, "\nPagamento á vista.");
        desconto = produto * 0.1;
        total = produto - desconto;
        break;

        case 2:
        strcpy(resultado, "\nPagamento á prazo.");
        printf("\nDigite a quantidade de parcelas: \n");
        scanf("%d",&parcela);
        total = produto / parcela;
    }

    printf("Valor: %.2f",produto);
    printf("%s\n",resultado);
    if(pagamento == 1){
        printf("Desconto: %.2f\n",desconto);
        printf("Total: %.2f",total);
    } else if(pagamento == 2){
        printf("Quantidade de parcelas: %d\n",parcela);
        printf("Valor por parcela: %.2f\n",total);
        printf("Total á prazo: %.2f",produto);
    }

    return 0;
}