/*
 * Program: read a set of text lines and print the longest
 * Algorithm:
 * 	while (there's another line)
 * 		if (it's longer than the previous longest)
 * 			save it
 * 			save its length
 * 	print longest line
 * */

#include <stdio.h>
#define MAXLINE 100	/* maximum input line size */

int _getline(char line[], int maxline);
void _copy(char to[], char from[]); 

/* print longest input line */
int main (int argc, char* argv[])
{
	int len;		/* current line length */
	int max;		/* maximum length seen so far */
	char line[MAXLINE];	/* current input line */
	char longest[MAXLINE];	/* longest line saved here */

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			_copy(longest, line);
		}
	if (max > 0)		/* there was a line */
		printf("%s", longest);

	return 0;
}

/* getline: read a line into s, return length */
int _getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void _copy(char to[], char from[])
{
	int i;
	while ((to[i] = from[i]) != '\0')
		++i;
}
