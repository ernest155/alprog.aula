#include <stdio.h>

int main()
{
    int qtd_Coxinha, qtd_pao_queijo, qtd_refri, qtd_suco, Coxinha = 5, pao = 2, refri = 4, suco = 6;
    float valor_total;
    printf("quantidade de Coxinha: ");
    scanf("%d", &qtd_Coxinha);
    
    printf("quantidade de Pão de queijo: ");
    scanf("%d", &qtd_pao_queijo);
    
    printf("quantidade de Refrigerante: ");
    scanf("%d", &qtd_refri);
    
    printf("quantidade de sucos: ");
    scanf("%d", &qtd_suco);
    
    valor_total = qtd_Coxinha*Coxinha + qtd_pao_queijo*pao+qtd_refri*refri+qtd_suco*suco;
    
    printf("Valor total do lanche: %.2f", valor_total);
}
