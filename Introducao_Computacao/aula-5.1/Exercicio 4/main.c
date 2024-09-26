#include <stdio.h>

int main()
{
    float salario, prestacao_emprestimo;
    
    scanf("%f", &salario);
    scanf("%f", &prestacao_emprestimo);
    
    salario = salario * 0.2;

    if (prestacao_emprestimo > salario){
        printf("Emprestimo não concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
}
