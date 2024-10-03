#include <stdio.h>
#include <math.h>

int main()
{
    float raio, area; 
    float pi =  3.141592;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);  

    area = pi * pow(raio, 2);  
    
    printf("A área do círculo é: %.2f cm²\n", area); 
    
    return 0;
}
