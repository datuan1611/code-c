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
void _reverse(char out[], char in[], int len);

/* print longest input line */
int main (int argc, char* argv[])
{
	int len;		/* current line length */
	char line[MAXLINE];	/* current input line */
	char outstr[MAXLINE];	/* output reversed line */

	while ((len = _getline(line, MAXLINE)) > 0) {
		_reverse(outstr, line, len);
		printf("%s", outstr);
	}
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
	
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

/* reverse: reverse the character string s */
void _reverse(char out[], char in[], int len)
{
	for (int i=0; i<len; ++i)
		out[i] = in[len-i-1];
	out[len] = '\n';
	out[len+1] = '\0';
}
