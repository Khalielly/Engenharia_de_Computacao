#include <stdio.h>

int main()
{
    int ano_de_nascimento, ano_atual, idade;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_de_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    idade = ano_atual - ano_de_nascimento;
    
    if (idade >= 18){
        printf("Você pode ir no Inter");
    }
    else{
        printf("Você não pode ir no Inter");
    }
    
}
