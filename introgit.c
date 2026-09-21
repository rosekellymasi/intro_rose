#include <stdio.h>
int main() {
	int dia;
	int mes;
	int año;
	printf("Dime tu cumple:\n");
	printf("dia:");
	scanf_s("%d", &dia);
	printf("\nmes: ");
	scanf_s("%d", &mes);
	printf("\naño: ");
	scanf_s("%d", &año);
	int suma = dia + mes + año;
	printf("\n\nresultado: %d + %d + %d = %d", dia, mes, año, suma);
}