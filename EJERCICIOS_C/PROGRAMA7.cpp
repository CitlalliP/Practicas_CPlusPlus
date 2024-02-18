#include<stdio.h>
int num, fact=1;
int main (void){
	printf("Escribe un número ");
	scanf("%d", &num);
	for (num;num>0;num--){
		fact=fact*num;
	}
	printf("\nSu factorial es: %d", fact);
	return 0;
}

