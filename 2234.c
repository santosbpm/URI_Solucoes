/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    double hot_dog, participants, avarage;

    /* receives the total number of hot dogs consumed 
       and the total number of participants */
    scanf("%lf %lf", &hot_dog, &participants);

    /* Average number */
    avarage = hot_dog / participants;

    printf("%.2lf\n", avarage);

    return 0;

}