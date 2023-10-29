//Valor do produto com desconto
#include <stdio.h>

int main()
{
    float preco, valor_promo;
    
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    
    valor_promo = preco - (preco * 0.05);
    
    printf("Valor promocional: %.2f", valor_promo);

}
