#include <stdio.h>
float calif;
int main (void){
	printf("Programa que solicita una calificaci�n, y evalua si aprob� o reprob�");
	printf("\n\nEscribe la calificaci�n\t");
	scanf("%f", &calif);
	if (calif>5.9)
	{
		printf("\nAprob�");
	}
	else
	{
		printf("\nReprob�");
	}
	return 0;
}
