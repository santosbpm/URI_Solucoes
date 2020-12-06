/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

/* Declaring Constants */
#define MEETING_TIME 480
#define MAXIMUM_TIME 60


int main() {

    /* Declaring Variables */
    int hour, minutes, delay;
    char colon;

    /* Thesis case */
    while(scanf("%d%c%d", &hour, &colon, &minutes) != EOF) {

        /* Delay time */
        delay = (((hour * 60) + minutes + MAXIMUM_TIME) - MEETING_TIME);

        /* Testing if it is not ahead, if it is ahead the delay is equal to 0 */
        if((hour == 7 && minutes == 0) || hour < 7) {
            printf("Atraso maximo%c 0\n", colon);
        } else {
            printf("Atraso maximo%c %d\n", colon, delay);
        }
    }
    return 0;
}