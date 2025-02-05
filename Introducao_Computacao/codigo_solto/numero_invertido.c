#include <stdio.h>

int main() {
    int numero, invertido, centena, dezena, unidade;


    printf("Digite um número de três algarismos: ");
    scanf("%d", &numero);


    if (numero >= 100 && numero <= 999) {
        centena = numero / 100;            
        dezena = (numero / 10) % 10;       
        unidade = numero % 10;             

 
        invertido = (unidade * 100) + (dezena * 10) + centena;


        printf("Número invertido: %d\n", invertido);
    } else {
        printf("O número digitado não tem três algarismos.\n");
    }

    return 0;
}