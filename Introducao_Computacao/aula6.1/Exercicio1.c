#include <stdio.h>

int main()
{
    int n1 = 1;
    int contador = 0;

    while (contador < 5){
        n1++;

        if (n1 % 3 == 0){
            printf("%d,", n1);
            contador++;
        }
    }
    
    return 0;
}