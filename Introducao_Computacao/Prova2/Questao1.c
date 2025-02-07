#include <stdio.h>

int main() {

	int codigo_produto, qnt_produto;
	float valor_unitario, valor_do_produto = 0, valor_total = 0;

	while(1) {

		printf("Codigo do Produto: ");
		scanf("%d", &codigo_produto);

		if(codigo_produto <=0) {
			break;
		}

		printf("Quantidade do Produto: ");
		scanf("%d", &qnt_produto);
		printf("Valor Unitario do Produto: ");
		scanf("%f", &valor_unitario);

		valor_do_produto = qnt_produto * valor_unitario;
		printf("Valor Total do Produto: %.2f\n\n", valor_do_produto);

		valor_total+=valor_do_produto;
	}

	printf("Valor total da compra: %.2f", valor_total);

	return 0;
}