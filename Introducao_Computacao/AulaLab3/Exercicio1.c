#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media;
    
    printf ("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf ("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf ("Digite a nota 3: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3)/3;
    
    printf("\nA média das notas é: %.1f", media);
    
    return 0;
}
