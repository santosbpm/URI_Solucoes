/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>
#include <string.h>


/* eye function */
int eye(alpha, beta, gama) {
    return 0.3 * alpha + 0.59 * beta + 0.11 * gama;
}

/* mean function */
int mean(alpha, beta, gama) {
    return (alpha + beta + gama) / 3;
}

/* maximum function */
int max(x, y) {
    if(x > y){
        return x;
    } else {
        return y;
    }
}

/* minimum function */
int min(x, y) {
    if(x < y){
        return x;
    } else {
        return y;
    }
}

int main() {

    /* Declaring Variables */
    char conversion[5];
    int alpha, beta, gama, level, counter, reader_1;

    /* Receives the number of test cases */
    scanf("%d", &reader_1);

    for(counter = 1; counter <= reader_1; counter++) {

        /* Receives the conversion to be used */
        scanf("%s", conversion);

        /* receives RBG values */
        scanf("%d%d%d", &alpha, &beta, &gama);

        /* Condition that compares the string to strcmp */
        if(!strcmp(conversion, "eye")) {
            level = eye(alpha, beta, gama);
        } else if (!strcmp(conversion, "mean")) {
            level = mean(alpha, beta, gama);
        } else if (!strcmp(conversion, "max")) {
            level = max(alpha, max(beta, gama));
        } else {
            level = min(alpha, min(beta, gama));
        }

        printf("Caso #%d: %d\n", counter, level);

    }

    return 0;
}