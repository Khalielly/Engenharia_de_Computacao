#include <stdio.h>

int main()
{
    int num_filho;
    float salario;
    
    int qnt_filhos = 0, qnt_pessoas = 0;
    int contador_pessoas = 0;
    
    float soma_salario = 0;
    float maior_salario = 0, percentual_salario = 0; 
    float media_salarial = 0, media_filhos = 0;
    
    while (1) {
        printf("Digite seu salário: ");
        scanf("%f", &salario);
        
        if (salario <= 0) {
            break;
        }
        
        soma_salario += salario;
        contador_pessoas++;
        
        printf("Digite a quantidade de filhos que você tem: ");
        scanf("%d", &num_filho);
        
        qnt_filhos += num_filho;

        if (salario > maior_salario) {
            maior_salario = salario;
        }
        
        if (salario <= 1412) {
            qnt_pessoas++;
        }
    }
    
    if (contador_pessoas > 0) {
        media_salarial = soma_salario / contador_pessoas;
        media_filhos = (float)qnt_filhos / contador_pessoas;
        percentual_salario = ((float)qnt_pessoas / contador_pessoas) * 100;
    }
    
    printf("\n");
    printf("A média salarial da população: %.3f\n", media_salarial);
    printf("A média do número de filhos: %.1f\n", media_filhos);
    printf("O maior salário: %.3f\n", maior_salario);
    printf("O percentual de pessoas com salário até R$ 1.412,00: %.2f%%\n", percentual_salario);

    return 0;
}
