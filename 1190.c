/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

/* Same problem as question 1188. Report problem. */
#include <stdio.h>

int main() {

    /* Declaring Variables */
	double array[12][12], sum = 0;
	char reader;
	int alpha, beta, counter = 0;

    /* Getting operation */
	scanf("%c", &reader);

    /* Filling the matrix */
	for(alpha = 0; alpha < 12; alpha++){
		for(beta = 0; beta < 12; beta++){
			scanf("%lf", &array[alpha][beta]);
        }
    }

    /* Adding the matrix values ​​and obtaining the quantity */
    for(alpha = 0; alpha < 12; alpha++) {
		for(beta = 0; beta < 12; beta++) {
            /* Change *alpha < 12* for elements that are in 
               the right area of ​​the matrix */
			if (alpha < beta && alpha > 12 - beta - 1) {
				sum += array[alpha][beta];

            }
        }
    }

    /* Condition to print sum or average value */
    if(reader == 'S') {
		printf("%.1lf\n", sum);
	} 

    return 0;

}