/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    int alpha = 0, beta = 0, gama = 0, delta = 0;
    int counter, number;

    /* Receive the number of numbers in the Bino list */
    scanf("%d", & number);
    int list[number];

    /* Receive the numbers from the Bino list and test */
    for (counter = 0; counter < number; counter++) {
        scanf("%d", & list[counter]);
        if (list[counter] % 2 == 0) {
            alpha++;
        }
        if (list[counter] % 3 == 0) {
            beta++;
        }
        if (list[counter] % 4 == 0) {
            gama++;
        }
        if (list[counter] % 5 == 0) {
            delta++;
        }
    }

    /* Print the number of multiple numbers 
       of 2, 3, 4 and 5 present in the list */
    printf("%d Multiplo(s) de 2\n", alpha);
    printf("%d Multiplo(s) de 3\n", beta);
    printf("%d Multiplo(s) de 4\n", gama);
    printf("%d Multiplo(s) de 5\n", delta);

    return 0;

}
