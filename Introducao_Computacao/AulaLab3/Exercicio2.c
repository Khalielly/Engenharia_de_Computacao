#include <stdio.h>

int main()
{
	float lado, area;

	printf("Digite o lado do quadrado em cm: ");
	scanf("%f", &lado);

	area = lado * lado;

	printf("\nA área do quadrado é: %.2f cm²\n", area);

	return 0;
}
