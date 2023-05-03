#include <stdio.h>

float pi(int n){

    float total;
    int i;

    total = 1;

    for(i=1;i<n;i++){
        if(i%2){
            total = total - (1.0/((2*i)+1));
        }
        else{
            total = total + (1.0/((2*i)+1));
        }
    }
    return 4*total;

}

int main(){

    int N,repete=1;
    float retorno;

    printf("\n\n -----------  Formula de Leibniz ------------\n\n\n");

    while(repete==1){

    printf("Digite a quantidade de elementos: ");
    scanf("%d",&N);

    retorno = pi(N);


    printf("\nEsse foi o resultado : %f",retorno);

    printf("\n\nDESEJA REPETIR ? (Digite (1) para sim) :   ");
    scanf("%d", &repete);
    }

    return 0;
}

