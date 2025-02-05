#include <stdio.h>

int main()
{
	int n1, soma = 0;

	scanf("%d", &n1);

	for(int i = 1; i < n1; i++) {

		if(n1 % i == 0) {
			soma+=i;
		}
	}

	if(soma == n1) {
		printf("%d E um numero perfeito", n1);
	} else {
		printf("%d Nao e um numero perfeito", n1);
	}
	return 0;
}
