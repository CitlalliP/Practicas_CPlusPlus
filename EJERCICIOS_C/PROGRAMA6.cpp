#include<stdio.h>
#include<math.h>
float precio, subtotal, iva, total;
int cantidad;
int main (void) {
	printf("Programa que calcula la compra total de un producto más el IVA");
	printf("\n\nEscribe el precio del producto ");
	scanf("%f", &precio);
	printf("\nEscribe la cantidad de productos ");
	scanf("%d", &cantidad);
	subtotal=precio*cantidad;
	iva=subtotal*0.15;
	total=subtotal+iva;
	printf("\nTotal a pagar: \t%f", total);
	return 0;
}
