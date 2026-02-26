#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comprimento, largura, altura, volume;

    printf("-----Calculo do Volume de uma Caixa Retangular-----\n");

    // 1. Entrada de Dados

    printf("Insira o valor do comprimento da caixa retangular: ");
    scanf("%f", &comprimento);

    printf("Insira o valor da largura da caixa retangular: ");
    scanf("%f", &largura);

    printf("Insira o valor da altura da caixa retangular: ");
    scanf("%f", &altura);

    // 2. Processamento

    volume = comprimento * largura * altura;

    // 3. Saída de Dados

    printf("O volume da caixa é %.2f\n", volume);

    return 0;
}



