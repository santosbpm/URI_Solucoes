/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <math.h>


int main() {

    /* Declaring Variables */
    int reader;
    double binet;

    /* Reads a natural number */
    scanf("%d", &reader);

    /* Binet formula */
    binet = pow(((1 + sqrt(5)) / 2), reader);
    binet -= pow(((1 - sqrt(5)) / 2), reader);
    binet /= sqrt(5);

    // binet = (pow(((1 + sqrt(5)) / 2), reader) - pow(((1 - sqrt(5)) / 2), reader)) / sqrt(5);

    /* Prints the result of the binet formula */
    printf("%.1lf\n", binet);

    return 0;

}