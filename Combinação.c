#include <stdio.h>

int coeficiente(int n, int k){

    int total;

    if(n==k || k==0){
        return 1;
    }
    else{
        return coeficiente(n-1,k)+coeficiente(n-1,k-1);
    }

}

int main(){

    int num,ero;
    int retorno;

    printf(" Digite os Numeros:  ");
    scanf("%d %d",&num, &ero);

    if (num < ero || num < 0) {
     printf("Erro! n deve ser maior ou igual a k e maiores ou iguais a zero.\n");
    }
    else {
     retorno = coeficiente(num,ero);
     printf("Coeficiente = %d\n", retorno);
    }

    retorno = coeficiente(num,ero);

    return 0;


}
