/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    int alpha, reader_1, reader_2;

    /* Get number of test cases */
    scanf("%d", &reader_1);

    /* Loop with number of test cases */
    for(alpha = reader_1; alpha > 0; alpha--) {
        scanf("%d", &reader_2);

        /* I cut the path and the result is based on whether the number is even or odd */
        if(reader_2 % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
}