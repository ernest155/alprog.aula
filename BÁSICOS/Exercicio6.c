#include <stdio.h>

int main()
{
    int qtd_bombom, dinheiro, bombom = 3;
    
    printf("Dinheiro: ");
    scanf("%d", &dinheiro);
    
    qtd_bombom = dinheiro / bombom;
    
    printf("quantidade de bombons: %d", qtd_bombom);
}
