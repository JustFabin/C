/******************************************************************************
Struct - Exemplo Média aluno - Fábio Stampone Miranda

*******************************************************************************/
#include <stdio.h>
#define tamanho 2

 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {

    float calc, mt;
    
    struct arrayaluno {
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct arrayaluno aluno[tamanho];
    
    // Entrada de DADOS
    for(int i=0;i<tamanho;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
    
    // Processamento
        aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
        
    // Media total
        calc += aluno[i].media;
        mt = calc/tamanho;
    }
        
    
    // Saída - Impressão do Boletim do Aluno
    for(int i=0;i<tamanho;i++){
        printf( "\nBOLETIM DO ALUNO: %d\n", aluno[i].matricula);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
    }
        printf("\n\nMédia total da sala: %.1f", mt);
    return 0;
}
