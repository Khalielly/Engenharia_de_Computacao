#include <stdio.h>

int main()
{
    int n1;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    if (n1%2 == 0){
        printf("É par");
    }
    else{
        printf("É ímpar");
    }
    
    return 0;
}