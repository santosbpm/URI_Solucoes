/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

/* If you remove the average part, the URI still accepts 
   the code. Report problem. */
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
			if (alpha > beta && alpha > 12 - beta - 1) {
				sum += array[alpha][beta];
                counter++;
            }
        }
    }

    /* Condition to print sum or average value */
    if(reader == 'S') {
		printf("%.1lf\n", sum);
	} else if(reader == 'M') {
		printf("%.1lf\n", sum/counter);
	}

    return 0;

}