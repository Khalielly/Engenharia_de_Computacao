#include <stdio.h>
#include <math.h> //sqrt, log

int main(){
    int n;
    float raiz, log2;
    
    printf("Digite um número inteiro: ");
    scanf("%d",&n); 
    
    raiz= sqrt(n);
    log2 = log(n)/log(2);
    
    printf("Raiz quadrada de n: %f\n", raiz);
    printf("Log2 de n: %f", log2);
    
    return 0;
}