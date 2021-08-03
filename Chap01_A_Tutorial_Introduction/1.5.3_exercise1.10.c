#include <stdio.h>

/*
 * copy input to output
 * replace:
 * 	tab 		-> \t
 * 	backspace 	-> \b
 * 	backslash	-> \\
 * */

main() {
	int c;

	while( (c=getchar()) != EOF ) {
		if(c == '\t')
			printf("\\t");		
		else if(c == '\b')
			printf("\\b");
		else
			putchar(c);
	}
}
