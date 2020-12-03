/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include<stdio.h>


int main() {

    /* Declaring Variables */
    int counter, low, low_index, reader;

    /* Gets the number of tests */
    scanf("%d", & reader);
    int array[reader];

    /* Filling the array */
    for(counter = 0; counter < reader; counter++) {
        scanf("%d", & array[counter]);
    }

    /* Searching lowest number and position */
    low = array[0];
    for(counter = 0; counter < reader; counter++) {
        if(array[counter] < low) {
            low = array[counter];
            low_index = counter;
        }
    }

    /* Prints the result */
    printf("Menor valor: %d\nPosicao: %d\n", low, low_index);

    return 0;
    
}