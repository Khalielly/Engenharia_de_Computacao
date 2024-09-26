#include <stdio.h>

int main() {
    int n1, n2, n3;
    int crescente;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite um número: ");
    scanf("%d", &n2);

    printf("Digite um número: ");
    scanf("%d", &n3);
    
    if (n1 > n2) {
        crescente = n1;
        n1 = n2;
        n2 = crescente;
    }
    if (n1 > n3) {
        crescente = n1;
        n1 = n3;
        n3 = crescente;
    }
    if (n2 > n3) {
        crescente = n2;
        n2 = n3;
        n3 = crescente;
    }

    printf("Números em ordem crescente: %d, %d, %d\n", n1, n2, n3);

    return 0;
}
