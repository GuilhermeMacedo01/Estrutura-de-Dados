#include <stdio.h>

int media(float G1, float G2, float G3){
    /*Calculando a media*/
    float total_media;

    total_media=(G1+G2+G3)/3.0;

    if(total_media>=5){
        printf(" \n ---------- O ALUNO FOI APROVADO ----------\n");
    }
    else if(total_media<5 && total_media>=3){
        printf(" \n ----------SERA NECESSARIO REALIZAR A PROVA FINAL----------\n");
    }
    else{
        printf(" \n ----------O ALUNO FOI REPROVADO ----------\n");
    }
    printf(" \n\n -> ESTA FOI SUA MEDIA FINAL: %.1f\n", total_media);
    return total_media;
}

int main(){

    float retorno;
    int repetir=1;


    /*struct da nota do aluno*/
struct nota_do_aluno{
    float nota_G1;
    float nota_G2;
    float nota_G3;

};
    struct nota_do_aluno aluno;

    while(repetir==1){

    printf("\n---------- MEDIA DE ALUNO -----------\n\n\n");

    printf(" Digite a PRIMEIRA nota: ");
    scanf(" %f",&aluno.nota_G1);

    printf("\n Digite a SEGUNDA nota: ");
    scanf(" %f",&aluno.nota_G2);

    printf("\n Digite a TERCEIRA nota: ");
    scanf(" %f",&aluno.nota_G3);

    /* Recebendo a media total*/
    retorno = media(aluno.nota_G1,aluno.nota_G2,aluno.nota_G3);

    /* Repetição do codigo*/
    printf("\n\n Deseja testar outras notas (Digite (1) para repetir) :    ");
    scanf("%d\n",&repetir);
    }



    return 0;
}

