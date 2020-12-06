/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    int departure, travel_time, time_zone;

    /* Receives the test variables */
    scanf("%d%d%d", &departure, &travel_time, &time_zone);

    /* First calculation */
    departure += (travel_time + time_zone);

    /* Condition analyze if the output was greater 
       than zero to have a positive value */
    if(departure < 0) {
        departure += 24;
    }

    /* Second calculation and answer */
    printf("%d\n", (departure % 24));

    return 0;

}