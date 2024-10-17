#include <stdio.h>

int main (){
    float valor_compra, valor_venda;
    
    printf("Valor da compra: ");
    scanf("%f", &valor_compra);
    
    if(valor_compra < 10){
        
        valor_venda = (valor_compra *0.7) + valor_compra;
    }
    else if (valor_compra >= 10.00 && valor_compra < 50.00){
        valor_venda = (valor_compra * 0.5) + valor_compra;
    }
    else{
        valor_venda = (valor_compra * 0.3) + valor_compra;
    }
    
    printf("Valor da venda: %.2f", valor_venda);
    
    return 0;
}