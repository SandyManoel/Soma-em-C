#include <stdio.h>
int main()
{
	int numero1;
	int numero2;
	int soma;
	printf("Digite um numero inteiro:");
	scanf("%i",&numero1);
	printf("Digite outro numero inteiro:");
	scanf("%i",&numero2);
	
	soma = (numero1 + numero2);
	printf("A soma dos numeros informados e de %i", soma);
	return 0;
}