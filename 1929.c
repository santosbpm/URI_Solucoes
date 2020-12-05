/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <stdlib.h>

/* Function that tests the conditions for the existence of the triangle */
int triangle(a, b, g, r) {
    int tri = 0;

    if(abs(a - b) < g && g < (a + b)) {
        tri++;
    }
    if(abs(a - g) < b && b < (a + g)) {
        tri++;
    }
    if(abs(a - b) < g && g < (a + b)) {
        tri++;
    }
    if(tri == 3) {
        return 1;
    } else {
        return 0;
    }
    
}


int main() {
    
    /* Declaring Variables */
    short int alpha, beta, gama, delta;

    /* Gets the lengths of four rods */
    scanf("%hd %hd %hd %hd", &alpha, &beta, &gama, &delta);

    /* Test the possibilities */
    if(triangle(alpha, beta, gama)) {
        printf("S\n");
    } else if(triangle(alpha, beta, delta)) {
        printf("S\n");
    } else if (triangle(alpha, gama, delta)) {
        printf("S\n");
    } else if (triangle(beta, gama, delta)) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;

}