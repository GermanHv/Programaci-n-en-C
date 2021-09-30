#include <stdio.h>
/* Imprimir una tabla de equivalencia entre Fahrenheit y Celcius
	la tabla va de 20 en 20, desde 0 hasta 300 */

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit\tCelsius\n");

	while (fahr <= upper) {
			celcius = 5 * (fahr-32) / 9;
			printf("%7.0f\t%15.1f\n", fahr, celcius );
			fahr = fahr + step;
	} 

	return 0;
}