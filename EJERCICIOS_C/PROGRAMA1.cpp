#include <stdio.h>
int num1, num2;
int main (void){
	printf("Diagrama que solicita dos n�meros e indica cual es el mayor");
	printf("\n\nEscriba el valor del primer n�mero\t");
	scanf("%d", &num1);
	printf("\n\nEscriba el valor del segundo n�mero\t");
	scanf("%d", &num2);
	if (num1>num2)
	{
		printf("El primer n�mero es el n�mero mayor");
	}
	else
	{
		if (num1<num2)
		{
			printf("El segundo n�mero es el mayor");
		}
		else
		{
			printf("Ambos n�meros son iguales");
		}
	}

	return 0;
}
	

