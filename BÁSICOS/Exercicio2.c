#include <stdio.h>

int main()
{
    char nome[100];
    int idade;

    printf("Digite seu  nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    
    printf("Oi %s! voce tem %d anos", nome, idade);


}
