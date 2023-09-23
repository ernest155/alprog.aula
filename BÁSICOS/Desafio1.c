#include <stdio.h>

int main()
{
    int qtd_dia, qtd_anos, dias, cigarros, perdido_minutos, perdidos;
    
    printf("Digite quantidade de cigarros por dia: ");
    scanf("%d", &qtd_dia);
    
    printf("Digite quantos anos fumou: ");
    scanf("%d", &qtd_anos);
    
    
    dias = qtd_anos * 365;
    cigarros = dias * qtd_dia;
    
    
    perdido_minutos = cigarros * 10;
    perdidos = (perdido_minutos / 1440);
    
    printf("Quabtidade de dias perdidos: %d", perdidos);
    
    
    
    // anos em dia: 365 * qtd_anos
    // quantos minutos perde po dia: 10 * qtd_dia;
    
}
