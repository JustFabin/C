#include <stdio.h>
#include <locale.h>

int mcc (int numA, int numB){
    
    int mmc, aux, i;
    
    for (i=2; i<=numB; i++){
        aux = numA * 1;
        if ((aux % numB) == 0){
            mmc = aux;
            i = numB + 1;
        }
    }
    return mmc;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numA, numB;
    int mcc();
    
    printf("Insira o primeiro número: ");
    scanf("%d", &numA);
    printf("Insira o segundo número: ");
    scanf("%d", &numB);
    
    printf("MMC: %d", mcc(numA, numB));
  
    return 0;
}
