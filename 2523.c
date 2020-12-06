/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    char reader_1[26];
	int alpha, reader_2, reader_3;

	while(1) {

        /* Receives the string or the stop condition */
        if(scanf("%s", reader_1) == EOF) {
            break;
        } else {

            /* Gets the number of lamps that have been blinked */
            scanf("%d", &reader_2);

            /* Gets and indicates which lamps that have been blinked */
            for(alpha = reader_2; alpha > 0; alpha--) {
                scanf("%d", &reader_3);
                printf("%c", reader_1[reader_3 - 1]);
            }

		    printf("\n");

        }
		
	}

    return 0;

}