/*
 * Program: write function 'detab' to replace tabs in input
 * 	    with proper number of blanks to next tab stop
 * */

#include <stdio.h>

#define MAXSTRING	(100+1)		/* max size of input/output */
#define	TABSPACE	3		/* number of blanks to space tab stop */

int n;

void detab(char s[], int index);

int main(int argc, char* argv[])
{
	extern int n;
	n = TABSPACE;
	
	char str[MAXSTRING];
	int c, i;

	i = 0;
	while( (c=getchar()) != EOF ) {
		if( c == '\t' ) {
			detab(str,i);
			i += (n-1);
		} else {
			str[i] = c;
		}
		++i;
	}
	str[i] = '\0';
	printf("\ndetab: %s", str);

	return 0;
}

void detab(char s[], int index)
{
	extern int n;
	
	int i = 0;

	while( i < n ) {
		s[index+i] = '+';
		++i;
	}
}
