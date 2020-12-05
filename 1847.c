/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


void humor(humor) {
    if(humor== 1){
        printf(":)\n");
    } else {
        printf(":(\n");
    }
}

int main() {

    /* Declaring Variables */
    int alpha, beta, gama;

    //printf("Digite 3 temperaturas com espaço: ");
    /* Gets temperatures */
    scanf("%d %d %d", &alpha, &beta, &gama);

    /* Setting mood by temperature */
    /* Firth case */
    if(alpha > beta && beta <= gama) { 
        humor(1);

    /* Second case */
    } else if(alpha < beta && beta >= gama) {
        humor(0);

    /* Third case */
    } else if(alpha < beta && beta < gama && gama - beta < beta - alpha) { 
        humor(0);

    /* Fourth case */
    } else if (alpha < beta && beta < gama && gama - beta >= beta - alpha) { 
        humor(1);

    /* Fifth case */
    } else if(alpha > beta && beta > gama && abs(gama - beta) < abs(beta - alpha)) { 
        humor(1);

    /* Sixth case */
    } else if(alpha > beta && beta > gama && abs(gama - beta) <= (beta - alpha)) {
        humor(0);

    /* Seventh case */
    } else if(alpha == beta && (gama - beta) > (beta - alpha)) {
        humor(1);

    /* Eighth case */
    } else {
        humor(0);
    }

    return 0;
}
/*
int main() {

    /* Declaring Variables
    int alpha, beta, gama;

    //printf("Digite 3 temperaturas com espaço: ");
    /* Gets temperatures
    scanf("%d %d %d", &alpha, &beta, &gama);

    /* Setting mood by temperature
    /* Firth case
    if(alpha > beta) {
        if(beta < gama) {
            humor(1);
        } else if(beta > gama) {
            if((gama - beta) < (beta - alpha)){
                humor(1);
            } else {
                humor(0);
            }
        }
    } else if(alpha < beta) {
        if(beta > gama) {
            humor(0);
        } else if(beta < gama) {
            if(gama - beta < beta - alpha) {
                humor(0);
            } else {
                humor(1);
            }
        }
    } else if(alpha == beta){
        if(gama > beta) {
            humor(1);
        } else {
            humor(0);
        }
    }
    return 0;
}
*/