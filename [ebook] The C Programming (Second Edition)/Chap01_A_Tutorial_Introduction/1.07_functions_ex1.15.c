/*
 * Print Fahrenheit-Celsius table
 * by using function.
 * */

#include <stdio.h>

#define LOWER	0	/* lower limit of table */
#define	UPPER	300	/* upper limit of table */
#define	STEP	20	/* step size */

float ConvFahrToCelsius( int fahr )
{
	return (5.0/9.0)*(fahr-32);
}

void ShowFahrCelsiusTable(int lower, int upper, int step)
{
	int fahr;
	for( fahr = lower; fahr <= upper; fahr += step )
		printf("%3d %6.1f\n", fahr, ConvFahrToCelsius(fahr));
}

int main(int argc, char* argv[])
{
	ShowFahrCelsiusTable(LOWER, UPPER, STEP);
	return 0;
}
