#include <stdio.h>

int main()
{
    float C, F;

    printf("Informe um valor de Fahrenheit para converter para Celsius: ");
    scanf("%f",&F);

   C = 5.0 * (F - 32.0) / 9.0;

    printf("\nTemperatura convertida para Celsius: %.1f°C\n",C);
    
    return 0;

}