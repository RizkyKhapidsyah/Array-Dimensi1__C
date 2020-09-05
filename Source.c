#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Created by Rizky Khapidsyah */

int main() {
	float Nilai[10];
	int X, Y;

	printf("Mau berapa data [1..10]: ");
	scanf_s("%i", &Y);

	for (X = 0; X < Y; X++)
	{
		printf("Nilai ke-%i: ", X + 1);
		scanf_s("%f", &Nilai[X]);
	}

	printf("\n");

	for (X = 0; X < Y; X++)
	{
		printf("Nilai ke-%i: %.2f\n", X + 1, Nilai[X]);
	}

	printf("\n");
	
	_getch();
	return 0;
}
