#include<stdio.h>
#include <math.h>
float medida, millas, pulgadas, pies;
int main (void){
	printf("Programa que convierte un valor de metros a millas, pulgadas y pies");
	printf("\n\nEscribe un valor en metros \t");
	scanf("%f", &medida);
	millas=medida*1609;
	pulgadas=medida*0.0254;
	pies=pulgadas*12;
	printf("La medida en millas es: \t %f",millas);
	printf("\n\nLa medida en pulgadas es: \t %f",pulgadas);
	printf("\n\nLa medida en pies es: \t %f",pies);
	return 0;
}

