/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/


#include <stdio.h>


int main () {

    /* Declaring Variables */
	int cases, alpha;
	float number, min;

	while(1) {
        /* Stop condition or number of cases */
        if(scanf("%d", &cases) == EOF) {
            break;
        } else {
            /* calculates the fastest attempt time for each battery */
            min = 100.0f;
            for (alpha = 0; alpha < cases; ++alpha) {
                scanf("%f", &number);
                if (number < min) {
                    min = number;
                }    
		    }

		    printf("%.2f\n", min);
        }
	}

    return 0;

}