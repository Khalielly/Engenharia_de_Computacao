#include <stdio.h>

int main()
{
    float raio, diametro;
    
    printf("Digite o raio de uma circunferência: ");
    scanf("%f", &raio);
    
    diametro = raio * 2;
    
    printf("O diâmetro é: %.2f", diametro);
    

    return 0;
}
