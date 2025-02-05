#include <stdio.h>

int main()
{
    int n1;
    int qnt_num_positivo = 0;
    int qnt_num_negativo = 0;
    
    while(1){
        printf("Digite um número: ");
        scanf("%d", &n1);
        
        if (n1 == 0 ){
            break;
        }else if (n1 < 0  && n1 != 0) {
            qnt_num_negativo++;
        }else{
            qnt_num_positivo++;
        }
    }
    
    printf("Quantidade de números positivos: %d\n", qnt_num_positivo);
    printf("Quantidade de números negativos: %d", qnt_num_negativo);
    
    
    return 0;
}