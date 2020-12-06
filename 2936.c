/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/


#include <stdio.h>


int main() {

    /* Declaring Variables */
    int portion[5] = {300, 1500, 600, 1000, 150}, total = 225;
    int reader, alpha;

    /* Gets the number of portions and sum */
    for (alpha = 0; alpha < 5; alpha++) {
        scanf("%d", &reader);
        total += reader * portion[alpha];
    }

    /* Prints the total */
    printf("%d\n", total);

    return 0;

}