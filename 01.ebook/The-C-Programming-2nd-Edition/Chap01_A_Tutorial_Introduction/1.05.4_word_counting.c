/*
 * This is a bare-bones version of the UNIX program wc.
 * Program of counting lines, words, and characters in input.
 * Note:
 * 	Definition of word is a sequence of characters
 * 	that does not contain a blank, tab or newline.
 * */

#include <stdio.h>

#define	IN  1	/* inside a word */
#define OUT 0	/* outside a word */

main() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;

	while( (c=getchar()) != EOF ) {
		++nc;
		if(c == '\n')	++nl;
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if( state == OUT ) {
			state = IN;
			++nw;
		}
	}
	printf("[nl nw nc] = [%d %d %d]\n", nl, nw, nc);
}
