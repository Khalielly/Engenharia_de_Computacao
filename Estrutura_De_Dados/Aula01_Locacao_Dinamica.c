#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas, colunas;

    printf("Digite a numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    int * matriz = (int *)malloc(linhas * colunas *sizeof(int *));
    if(matriz == NULL) {
        printf("Erro de mémoria.");
        return 1;
    }

    for(int i = 0; i<linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("Endereco [%d][%d] %p\n", i, j, &matriz[i * colunas + j]);
        }
    }

    printf("\n");

    for (int i = 0; i<linhas; i++) {
        for(int j =0; j<colunas; j++) {
            printf("Elementos [%d][%d]: ", i, j);
            scanf("%d", &matriz[i * colunas + j]);
        }

        // printf("Matriz: ");
        // for(int x = 0; x<i; x++) {
        //     for(int y = 0; y<(x==i ? y + 1: colunas); y++) {
        //         printf("%d", matriz[x * colunas + y]);
        //     }
        //     printf("\n");
        // }
        printf("\n");
    }

    return 0;
}
