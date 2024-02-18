#include <stdio.h>
float calif;
int main (void){
	printf("Programa que solicita una calificación, y evalua si aprobó o reprobó");
	printf("\n\nEscribe la calificación\t");
	scanf("%f", &calif);
	if (calif>5.9)
	{
		printf("\nAprobó");
	}
	else
	{
		printf("\nReprobó");
	}
	return 0;
}
