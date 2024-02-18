#include<stdio.h>
#include<math.h>
float precio, total;
int cantidad;
int main (void) {
	printf("Programa que calcula la compra total de un producto");
	printf("\n\nEscribe el precio del producto ");
	scanf("%f", &precio);
	printf("\nEscribe la cantidad de productos ");
	scanf("%d", &cantidad);
	total=precio*cantidad;
	printf("\nTotal a pagar: \t%f", total);
	return 0;
}
