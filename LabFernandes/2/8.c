﻿#include <stdio.h>
#include <stdlib.h>

int NumeroPrimo(int); // retorna zero caso o numero seja primo

int main() {
	unsigned int n, boolean;

	printf("VERIFICA SE O NUMERO DIGITADO E PRIMO\n\n");

	scanf("%d", &n);

<<<<<<< HEAD
	boolean = isNumeroPrimo(n);

	if (boolean)
=======
	if (NumeroPrimo(n))
		printf("Nao e Numero Primo\n");
	else 
>>>>>>> 69f25a0c721457af6fbfc98a3fc0d42b5d885de2
		printf("Numero Primo\n");
	else 
		printf("Nao e Numero Primo\n");

	return 0;
}

int NumeroPrimo(int n) {
	int i;
	if (n == 2) 
		return 1;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}