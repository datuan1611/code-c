/*
 * Program: "fold" long input lines into two or more shorter lines
 * 	    after the last non-blanks character that occurs before
 * 	    the n-th column of input
 * */

#include <stdio.h>

#define MAXSTRING	(100+1)		/* max size of input/output */
#define	MAXLINE		5		/* max length of line in output */

int n;

void fold(char in[], char out[]);

int main(int argc, char* argv[])
{
	extern int n;
	n = MAXLINE;
	
	char in[MAXSTRING];
	char out[MAXSTRING];
	int c, i;

	i = 0;
	while( (c=getchar()) != EOF ) {
		in[i] = c;
		++i;
	}
	in[i] = '\0';

	fold(out,in);
	printf("\nFOLD:\n%s", out);

	return 0;
}

void fold(char out[], char in[])
{
	extern int n;

	int i,j,pos;
	i = j = pos = 0;

	while( (out[i] = in[j]) != '\0' ) {
		if( pos < n-1 ) {
			++pos;
		} else {
			while( out[i]==' ' || out[i]=='\t' || out[i]=='\n' ) {
				--i;
				--j;
			}
			++i;
			out[i] = '\n';
			pos = 0;
		}
		++i;
		++j;
	}
}
