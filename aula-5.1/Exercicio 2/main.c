#include <stdio.h>
#include <math.h>

int main()
{
    float n1;
    
    printf("Digite o número: ");
    scanf("%f", &n1);
    
    if(n1 >= 0){
        printf("Raiz quadrada: %.2f", sqrt(n1));
    }
    else{
        printf("Elevado ao quadrado: %.1f", pow(n1, 2));
    }
}
