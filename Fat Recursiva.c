#include <stdio.h>

int fat(int n){
    int total;
    /* Fatorial Recursiva*/
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}

int main(){

    int numero,fatorial;

    printf("\n\n--------- FATORIAL RECURSIVA ------------\n\n\n");

    printf("Digite o numero do fatorial: ");
    scanf("%d",&numero);

    fatorial = fat(numero);

    printf("\nO Resultado do fatorial %d ! eh : %d\n\n",numero,fatorial);


    return 0;
}
