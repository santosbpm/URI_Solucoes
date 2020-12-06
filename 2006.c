/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

int main() {

    /* Declaring Variables */
    int tea, alpha;
    int answers[5], right_answer = 0;

    /* Receive the type of tea */
    scanf("%d", &tea);

    /* Get the 5 answers */
    for(alpha = 0; alpha < 5; alpha++){
        scanf("%d", &answers[alpha]);
        
        /* Count how many hits */
        if(tea == answers[alpha]){
            right_answer++;
        }
    }

    printf("%d\n", right_answer);

    return 0;
}