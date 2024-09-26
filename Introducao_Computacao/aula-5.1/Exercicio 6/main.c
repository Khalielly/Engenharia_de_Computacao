#include <stdio.h>

int main()
{
    float nota_trab_lab, nota_avaliacao_semestral, nota_exame_final;
    float media;
    
    printf("Digite as notas: ");
    scanf("%f %f %f", &nota_trab_lab, &nota_avaliacao_semestral, &nota_exame_final);
    
    media = ((nota_trab_lab * 2) + (nota_avaliacao_semestral * 3) + (nota_exame_final *5)) /10;
    
    if (media >= 0 && media < 3){
        printf("Reprovado");
    }
    else if (media >= 3 && media < 5){
        printf("Recuperação");
    }
    else{
        printf("Aprovado");
    }
}
