/******************************************************************************

Programa Bandas - Aula 10/10/2022 - Fábio Stampone

*******************************************************************************/
#include <stdio.h>
#define TAM 3

typedef struct banda {
    
    char nome[20];
    char tipo[20];
    int num;
    int rank;
} BANDA;

void leBanda (BANDA *v) {
    
    for(int i=0;i<TAM;i++){
        printf("\nNome da banda: "); scanf ("%s", v[i].nome);
        printf("Estilo Musical: ");  scanf("%s", v[i].tipo);
        printf("Integrantes: "); scanf("%d", &v[i].num);
        printf("Ranking: "); scanf("%d", &v[i].rank);
    }
}

void exibeBanda (BANDA *exib){
    
    for(int i=0;i<TAM;i++){
        printf("\nBanda: %s", exib[i].nome);
        printf("\nEstilo: %s", exib[i].tipo);
        printf("\nIntegrantes: %d", exib[i].num);
        printf("\nRanking: %d\n", exib[i].rank);
    }
}

int main(){
    
    BANDA v[TAM];
    leBanda(v);
    printf("\n\nEXIBIR BANDAS:\n");
    exibeBanda(v);
    return 0;
}
