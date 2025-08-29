void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutar(char *string, int inicio, int fim) {
    if(inicio == fim) {
        printf("%s\n", string);
    }else {
        for (int i = inicio; i<= fim; i++) {
            swap(&string[inicio], &string[i]);
            permutar(string, inicio + 1, fim);
            swap(&string[inicio], &string[i]);
        }
    }
}

#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    scanf("%s", str);
    int tamanho = strlen(str);

    permutar(str, 0, tamanho - 1);

    return 0;
}
