/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include<stdio.h>

// Program without vector
int main() {

    /* Declaring Variables */
    long long int num, first, second, next;
    int reader_1, alpha, beta;

    //printf("Digite quantos testes deseja fazer: ");
    /* Gets the number of tests */
    scanf("%d", & reader_1);

    /* Loop with the times that will be asked about the number to be tested */
    for(alpha = 1; alpha <= reader_1; alpha++) {
        
        //printf("Digite a posição desejada: ");
        /* index to be searched */
        scanf("%lld", & num);
        
        num++;
        first = 0;
        second = 1;

        /* Search the value by the indicated key */
        for(beta = 0; beta < num; beta++) {
            if(beta <= 1) {
                next = beta;
            } else {
                next = first + second;
                first = second;
                second = next;
            }
        }

        /* Prints the value */
        printf("Fib(%lld) = %lld\n", --num, next);

    }

    return 0;

}

/*
#include <stdio.h>

// Program with vector
int main() {

    // Declaring Variables
    long long int x = 10, apha = 0, beta = 1, gama = 0, N[10];
    long long int i, y, reader_1, reader_2;

    //Adding the first 10 fibonacci terms to a vector
    for(y = 1; y <= x; y++) {
        if (y % 2 == 1) {
            N[--y] = gama;
            gama = apha + beta;
            apha = gama;
        } else if (y == 2) {
            N[--y] = gama;
        } else if (y % 2 == 0) {
            N[--y] = gama;
            gama = apha + beta;
            beta = gama;
        }
        y++;
    }

    // Gets the number of tests
    scanf("%lld", & reader_1);
    
    // Search the value by the indicated key 
    for(i = 1; i <= reader_1; i++) {
        scanf("%lld", & reader_2);
        printf("Fib(%lld) = %lld\n", reader_2, N[reader_2]);
    }

    return 0;
}*/