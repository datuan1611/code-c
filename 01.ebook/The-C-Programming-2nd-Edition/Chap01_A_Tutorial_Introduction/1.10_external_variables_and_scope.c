/*
 * Program: read a set of text lines and print the longest
 * Algorithm:
 * 	while (there's another line)
 * 		if (it's longer than the previous longest)
 * 			save it
 * 			save its length
 * 	print longest line
 * Update:
 * 	using external variables
 * */

#include <stdio.h>

#define MAXLINE 100	/* maximum input line size */

int max;		/* maximum length seen so far */
char line[MAXLINE];	/* current input line */
char longest[MAXLINE];	/* longest line saved here */

int _getline(void);
void _copy(void); 

/* print longest input line; specialized version */
int main (int argc, char* argv[])
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = _getline()) > 0)
		if (len > max) {
			max = len;
			_copy();
		}
	if (max > 0)		/* there was a line */
		printf("%s", longest);

	return 0;
}

/* getline: specialized version */
int _getline(void)
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

/* copy: specialized version */
void _copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0')
		++i;
}
