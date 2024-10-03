#include <stdio.h>
#include <math.h>

int main()
{
    double angulo, seno, cosseno;

    printf("Digite um ângulo em graus: ");
    scanf("%lf", &angulo);

    angulo = angulo * (M_PI / 180.0); // Converter para radianos
    seno = sin(angulo);
    cosseno = cos(angulo);

    printf("O seno de %.2lf graus é %.2lf\n", angulo, seno);
    printf("O cosseno de %.2lf graus é %.2lf\n", angulo, cosseno);

    return 0;
}