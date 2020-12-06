/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <stdlib.h>


int main() {

    /* Declaring Variables */
    int mat[101][101];
    int reader_1, reader_2, counter_1, counter_2, alpha, beta, gama, delta;

    while(1) {

        /* Read test numbers and stop condition */
        if(scanf("%d%d", &reader_1, &reader_2) == EOF) {
            break;
        }

        /* Determine the shortest time needed to go to the position */
        for(counter_1 = 0; counter_1 < reader_1; counter_1++) {
            for(counter_2 = 0; counter_2 < reader_2; counter_2++) {

                /* Get the positions */
                scanf("%d", & mat[counter_1][counter_2]);
                if(1 == mat[counter_1][counter_2]) {
                    alpha = counter_1; 
                    beta = counter_2;
                }
                if(2 == mat[counter_1][counter_2]) {
                    gama = counter_1; 
                    delta = counter_2;
                }
            }
        }

        /* prints the line containing the shortest time needed to get to the goal */
        printf("%d\n", (abs(delta - beta) + abs(gama - alpha)));
    }

    return 0;

}