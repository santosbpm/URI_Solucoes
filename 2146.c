/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

int main() {

    /* Declaring Variables */
    int reader;

    while (1) {
        /* Stop condition, entry ends with end of file (EOF) */
        if (scanf("%d", &reader) == EOF) {
            break;
        } else {
            /* prints the corresponding password */
            printf("%d\n", --reader);
        }
    }

    return 0;

}