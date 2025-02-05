#include <stdio.h>

int main() {
    float valor_compra, valor_pago, troco;
    int parte_inteira, parte_decimal;
    int Nota200, Nota100, Nota50, Nota20, Nota10, Nota5, Nota2;
    int Moeda1real, Moeda50cent, Moeda25cent, Moeda10cent, Moeda5cent, Moeda1cent;


    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    printf("Digite o valor pago: ");
    scanf("%f", &valor_pago);

    // Calcula o troco
    troco = valor_pago - valor_compra;
    parte_inteira = (int)troco; 
    parte_decimal = (int)((troco - parte_inteira) * 100); 
    
    // Cálculo das notas
    Nota200 = parte_inteira / 200;
    parte_inteira %= 200;
    
    Nota100 = parte_inteira / 100;
    parte_inteira %= 100;
    
    Nota50 = parte_inteira / 50;
    parte_inteira %= 50;
    
    Nota20 = parte_inteira / 20;
    parte_inteira %= 20;
    
    Nota10 = parte_inteira / 10;
    parte_inteira %= 10;
    
    Nota5 = parte_inteira / 5;
    parte_inteira %= 5;
    
    Nota2 = parte_inteira / 2;
    parte_inteira %= 2;

    // Cálculo das moedas
    Moeda1real = parte_inteira; 

    Moeda50cent = parte_decimal / 50;
    parte_decimal %= 50;

    Moeda25cent = parte_decimal / 25;
    parte_decimal %= 25;

    Moeda10cent = parte_decimal / 10;
    parte_decimal %= 10;

    Moeda5cent = parte_decimal / 5;
    parte_decimal %= 5;

    Moeda1cent = parte_decimal;
    

    printf("\nTroco: %.2f\n\n", troco);
    
    //Saida das notas
    printf("Notas de 200: %d\n", Nota200);
    printf("Notas de 100: %d\n", Nota100);
    printf("Notas de 50: %d\n", Nota50);
    printf("Notas de 20: %d\n", Nota20);
    printf("Notas de 10: %d\n", Nota10);
    printf("Notas de 5: %d\n", Nota5);
    printf("Notas de 2: %d\n", Nota2);
    
    //Saida das moedas
    printf("Moedas de 1 real: %d\n", Moeda1real);
    printf("Moedas de 0.50 centavos: %d\n", Moeda50cent);
    printf("Moedas de 0.25 centavos: %d\n", Moeda25cent);
    printf("Moedas de 0.10 centavos: %d\n", Moeda10cent);
    printf("Moedas de 0.5 centavos: %d\n", Moeda5cent);
    printf("Moedas de 0.1 centavo: %d\n", Moeda1cent);

    return 0;
}
