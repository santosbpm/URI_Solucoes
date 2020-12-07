/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    int sum = 0;
    int reader, counter;
    
    /* Error: I can take one line at a time */
    /* Receives several integers */
    for (counter = 0; counter < 9; counter++) {
        scanf("%d", &reader); 
        sum += reader;
    }

    /* Choose the number */
    switch((sum - 1) % 9) {
        case 0: printf("Dasher\n"); break;
        case 1: printf("Dancer\n"); break;
        case 2: printf("Prancer\n"); break;
        case 3: printf("Vixen\n"); break;
        case 4: printf("Comet\n"); break;
        case 5: printf("Cupid\n"); break;
        case 6: printf("Donner\n"); break;
        case 7: printf("Blitzen\n"); break;
        case 8: printf("Rudolph\n"); break;
    }

    return 0;

}