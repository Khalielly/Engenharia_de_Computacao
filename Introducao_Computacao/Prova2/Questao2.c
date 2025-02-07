#include <stdio.h>

int main() {

	int matricula;
	float nota1, nota2, nota3, media = 0;
	float percentual = 0, contador_aluno = 0;
	float alunos = 0;

	while(1) {

		printf("Matricula: ");
		scanf("%d", &matricula);

		if(matricula<=0) {
			break;
		}

		alunos++;

		printf("Nota 1: ");
		scanf("%f", &nota1);
		printf("Nota 2: ");
		scanf("%f", &nota2);
		printf("Nota 3: ");
		scanf("%f", &nota3);

		media = (nota1 + nota2 + nota3)/3;
		printf("Media: %.1f\n", media);
		printf("\n");

		if(media >= 6) {
			contador_aluno++;
		}

	}

	percentual = (contador_aluno/alunos)*100;

	printf("Percentual de alunos com media >= 6.0: %.1f%%", percentual);

	return 0;
}