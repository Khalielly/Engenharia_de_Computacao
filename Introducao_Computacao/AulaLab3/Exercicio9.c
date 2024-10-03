#include <stdio.h>

int main()
{
    float hectares, M; 
    
    printf("Digite um valor de área em hectares: ");
    scanf("%f", &hectares);  

    M = hectares * 10000;  
    
    printf("O valor de área em hectares convertido para metros quadrados é: %.2fm²\n", M); 
    
    return 0;
}
