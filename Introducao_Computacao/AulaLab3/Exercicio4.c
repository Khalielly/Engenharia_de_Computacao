#include <stdio.h>

int main()
{
    float C, F;

    printf("Informe um valor de Celsius para converter para Fahrenheit: ");
    scanf("%f",&C);

   F = (C * (9.0 / 5.0)) + 32.0;

    printf("\nTemperatura convertida para Fahrenheit: %.2f\n",F);
    
    return 0;

}