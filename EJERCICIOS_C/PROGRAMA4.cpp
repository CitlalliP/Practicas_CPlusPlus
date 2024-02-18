#include<stdio.h>
int color;
int main(void){
	printf("Programa que funciona como semáforo.");
	printf("\n\nElige un color: \n1.Rojo \n2. Amarillo \n3. Verde");
	printf("\n\nEscribe el valor del color:\t");
	scanf("%d",&color);
	if (color==1)
	{
		printf("\nAlto total");
	}
	else
	{
		if (color==2)
		{
			printf("\nAlto preventivo");
		}
		else
		{
			printf("\nSiga");
		}
	}
	return 0;
}
