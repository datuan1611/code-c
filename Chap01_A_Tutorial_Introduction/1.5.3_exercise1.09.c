#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/* copy input to output
 * replace each string of one or more blanks by a single blank
 * */

main() {
	int	c_input, index;
	char	c_output[100];
	bool	b_isReadyBlank = false;

	memset(c_output,0,strlen(c_output));

	index = 0;
	while( (c_input = getchar()) != EOF ) {
		if( c_input == ' ' && b_isReadyBlank == true) {
			continue;
		} else if( c_input == ' ' && b_isReadyBlank == false ) { 
			b_isReadyBlank = true;
			c_output[index] = c_input;
			++index;
		} else if( c_input != ' ' ) {
			b_isReadyBlank = false;
			c_output[index] = c_input;
			++index;
		}
	}

	printf("output: %s\n",c_output);
}
