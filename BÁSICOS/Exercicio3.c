#include <stdio.h>

int main()
{
    int qtd_km, qtd_dias, km, dias, valor_total;
    
    printf("Digite quantidade de km percorridos: ");
    scanf("%d", &qtd_km);
    
    printf("Digite quantidade de dias: ");
    scanf("%d", &qtd_dias);
    
    km = 0.20 * qtd_km;
    dias = 90 * qtd_dias;
    
    valor_total = km + dias;
    
    printf("Valor total: %d", valor_total);
    

}
