#include <stdio.h>

int main(){
    
    int N, T;
    int soma = 0, i = 1;
    
    printf("Para N = ");
    scanf("%d", &N);

    while(1){
        if(i==N){
            break;
        } else if(soma == N){
            break;
        }
        
        if(i%2 != 0){
            soma+=i;
            T++;
        }
        
        i++;
    }
    
    if(soma == N){
        printf("T = %d termos\n%d é um quadrado perfeito",T,N);
    }else{
        printf("T = %d termos\n%d não é um quadrado perfeito",T,N);
    }
    
    return 0;
}