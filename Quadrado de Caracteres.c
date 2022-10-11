/******************************************************************************
 Fabio Stampone 19/09/22 - Impressao de Quadrado de Caracteres
*******************************************************************************/
#include <stdio.h>

int imprime(int n, char c);

int main()
{
    printf("\n%d", imprime(6, '!'));

    return 0;
}

int imprime(int n, char c)
{
    int i, j;
    
    for(i=0; i<n; i++){
        
        for(j=0; j<=i; j++){
            printf("%c", c);
        }
        
        printf("\n");
        
    }
    
    return (n*n);
}
