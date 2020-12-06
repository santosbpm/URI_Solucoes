/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <string.h>

int main() {

    /* Declaring Variables */
    char number[10], reverse[10];
    int alpha, beta;

    /*  */
    scanf("%s", number);

    /* Declaring variable with element size */
    int size = strlen(number);
    
    /* Last index */
    beta = size - 1;

    /* Reverse numbers */
    for(alpha = 0; alpha < size / 2; alpha++) {
        reverse[alpha] = number[alpha];
        number[alpha] = number[beta];
        number[beta] = reverse[alpha];
        beta--;
    }

    printf("%s\n", number);
    return 0;
}
