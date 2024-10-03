#include <stdio.h>

int main()
{
    float n1, n2, operacao;
    int operador;

    printf("1. soma\n2. subtração\n3. multiplicação\n4. divisão\n\nDigite a opção de acordo com o operador que deseja: ");
    scanf("%d", &operador);

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    switch (operador)
    {
    case 1:
        operacao = n1 + n2;
        printf("\nResultado da soma: %.2f\n", operacao);
        break;
    case 2:
        operacao = n1 - n2;
        printf("\nResultado da subtração: %.2f\n", operacao);
        break;
    case 3:
        operacao = n1 * n2;
        printf("\nResultado da multiplicação: %.2f\n", operacao);
        break;
    case 4:
        operacao = n1 / n2;
        printf("\nResultado da divisão: %.2f\n", operacao);
        break;
    default:
        printf("A opção selecionada não existe!");
    }

    return 0;
}
