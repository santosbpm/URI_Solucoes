/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <string.h>


int main() {

    /* Declaring Variables */
    int alpha = 0, sum;
    char eyes[10];

    /* Loop with 3 sums */
    for(alpha = 0; alpha < 3; alpha++) {
        sum = 0;

        while(1) {
            
            // printf("Digite como estão os olhos do corvo: ");
            scanf("%s caw", eyes);

            /* Stop condition */
            if (!strcmp(eyes, "caw")) {
                break;
            }

            /* Analyzing the eye that is open */
            if (eyes[0] == '*') {
                sum += 4;
            }
            if (eyes[1] == '*') {
                sum += 2;
            }
            if (eyes[2] == '*') {
                sum += 1;
            }

        }

        printf("%d\n", sum);
    }

    return 0;
}