#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int n, i, j;
    int tabuada;

    for(j = 3; i <= 7; j+=2){ //i = i+2 //i+=2
        for(i = 1; i <= 10; i++){
        printf("%d x %d = %d \n",j,i, i*j);
    }
    printf("\n");
    }
    getchar();
    return 0;
}