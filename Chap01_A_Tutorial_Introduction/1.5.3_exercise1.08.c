#include <stdio.h>

/* counting from input:
 * 	blank (nb)
 * 	tab (nt)
 * 	newline (nl)
 * */

main() {
	int c, nb, nt, nl;

	nb = nt = nl = 0;
	while( (c=getchar()) != EOF ) { 
		if( c == ' ' ) ++nb;
		if( c == '\t' ) ++nt;
		if( c == '\n' ) ++nl;
	}

	printf("nb = %d\tnt = %d\tnl = %d\n", nb, nt, nl);
}
