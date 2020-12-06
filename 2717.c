/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main() {

    /* Declaring Variables */
    int remaining_minutes, necessary_time_1, necessary_time_2;

    /* Get time left */
    scanf("%d", &remaining_minutes);

    /* Get needed time */
    scanf("%d %d", &necessary_time_1, &necessary_time_2);

    /* Condition to perform the task */
    if(remaining_minutes < necessary_time_1 + necessary_time_2)
        printf("Deixa para amanha!\n");
    else
        printf("Farei hoje!\n");

    return 0;
}