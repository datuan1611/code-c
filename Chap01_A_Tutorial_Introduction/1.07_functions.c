/*
 * test power function
 * */

#include <stdio.h>

int power(int m, int n);		// declaration of function

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)			// definition of function
{
	int i, p;
	
	p = 1;
	for(i = 1; i <= n; ++i)
		p *= base;
	return p;
}
