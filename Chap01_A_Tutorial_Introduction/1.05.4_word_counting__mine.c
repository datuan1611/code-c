#include <stdio.h>
#include <stdbool.h>

/* Word Counting
 * definition of word: sequence of charaters that not contain a blank, tab or new line
 * */

main() {
	int	c_input;
	int	nw = 0;
	bool	b_isSpecialChar = true;

	while( (c_input=getchar()) != EOF ) {
		// putchar(c_input);
		if( c_input != ' '
		 && c_input != '\t'
		 && c_input != '\n' ) {
			if( b_isSpecialChar == true ) {
				++nw;
			}
			b_isSpecialChar = false;
		} else {
			b_isSpecialChar = true;
		}
	}
	printf("number of words: %d\n", nw);
}
