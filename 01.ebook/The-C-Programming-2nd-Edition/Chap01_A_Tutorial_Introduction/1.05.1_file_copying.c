#include <stdio.h>

/* read a character
 * while (character is not end-of-file indicator)
 *	output the character just read
 * 	read a character
 */

/* copy input to output: 2nd version */

main() {
	int c;

	while( (c = getchar()) != EOF ) {
		putchar(c);
	}
}
