#include <stdio.h>

int main()
{
    float polegadas, centimetros; 
    
    printf("Digite o valor de comprimento em polegadas: ");
    scanf("%f", &polegadas);  

    centimetros = polegadas * 2.54;  
    
    printf("O valor em polegadas convertido para centímetros é: %.2f\n", centimetros); 
    
    return 0;
}
