#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int i, n, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite o %d número: ",i);
        scanf("%d",&n);

        soma += n; // soma = soma + numero
    }

    printf("Soma: %d",soma);

    getchar();
return 0;
}