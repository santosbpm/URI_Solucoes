/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


/* Function for sorting the array */
void sort(int *array, int size) {

    /* Declaring Variables */
    int alpha, beta, temporary;

    for(alpha = 1; alpha < size; alpha++) {
        beta = alpha - 1;
        temporary = array[alpha];

        while(1) {
            if(beta >= 0 && array[beta] < temporary) {
                array[beta + 1] = array[beta];
			    beta--;
            } else {
                array[beta + 1] = temporary;
                break;
            }
        }
    }
}

int main () {

    /* Declaring Variables */
	int classified, competitors, must_classify;
	int delta, gama;

    /* Gets the number of contestants */
	scanf("%d", &competitors);

    /* Obtain the minimum number of competitors 
       who must qualify for the next stage */
	scanf("%d", &must_classify);
	int score[competitors];

    /* Receive a competitor's score */ 
	for(delta = 0; delta < competitors; delta++) {
		scanf("%d", &score[delta]);
    }

	sort(score, competitors);

	gama = must_classify;
	delta = must_classify - 1;
	classified = must_classify;

    /* Classified */
	while(1) {
        if(score[gama++] == score[delta]) {
            classified++;
        } else {
            break;
        }        
    }

	printf("%d\n", classified);

    return 0;
}
