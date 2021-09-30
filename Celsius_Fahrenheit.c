#include <stdio.h>

/*Tabla de datos Celsius a Fahrenheit*/

int main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("Celsius\t\tFahrenheit\n");

	while (celsius<=upper)
	{
		fahr = (celsius*9/5)+32;
		printf ("%7.0f\t%15.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}