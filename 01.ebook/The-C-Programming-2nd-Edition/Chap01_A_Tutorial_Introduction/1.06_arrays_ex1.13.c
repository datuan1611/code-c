/*
 * Program:
 * 	print a histogram of the lengths of words in input.
 * 	draw the histogram with the bars horizontal; a vertical
 * 	orientation is more challenging.
 * */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define	MAX_OF_WORD	10

int main( int argc, char* argv[] )
{
	int	c_input;
	int	i_lengthOfWord[MAX_OF_WORD];
	int	i_numberOfWord	= 0;
	bool	b_isWhiteSpace	= true;

	memset(i_lengthOfWord,0,MAX_OF_WORD*sizeof(int));

	while( (c_input=getchar()) != EOF ) {
		if( c_input == ' '
		 || c_input == '\t'
		 || c_input == '\n' ) {
			b_isWhiteSpace = true;
		} else {
			if( b_isWhiteSpace == true ) {
				b_isWhiteSpace = false;
				++i_numberOfWord;
				if( i_numberOfWord > MAX_OF_WORD ) {
					printf("\nError: Out of number of words\n");
					return 1;
				}
			}
			++i_lengthOfWord[i_numberOfWord-1];
		}
	}
	printf("\nNumber of word: %d\n", i_numberOfWord);
	for( int i = 0; i < i_numberOfWord; ++i )
		printf("%d ", i_lengthOfWord[i]);

	return 0;
}
