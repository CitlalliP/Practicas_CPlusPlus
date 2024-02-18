#include <stdio.h>
int num1, num2;
int main (void){
	printf("Diagrama que solicita dos números e indica cual es el mayor");
	printf("\n\nEscriba el valor del primer número\t");
	scanf("%d", &num1);
	printf("\n\nEscriba el valor del segundo número\t");
	scanf("%d", &num2);
	if (num1>num2)
	{
		printf("El primer número es el número mayor");
	}
	else
	{
		if (num1<num2)
		{
			printf("El segundo número es el mayor");
		}
		else
		{
			printf("Ambos números son iguales");
		}
	}

	return 0;
}
	

