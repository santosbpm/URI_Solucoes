/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main () {

    /* Declaring Variables */
	int reader, alpha, ki;

    /* Gets the number of retries */
	scanf("%d", &reader);

	for(alpha = 0; alpha < reader; alpha++) {
        /* Energy level */
		scanf("%d", &ki);

        /* Condition that analyzes the energy level */
		if(ki > 8000){
			printf("Mais de 8000!\n");
        } else {
			printf("Inseto!\n");
        }
    }

    return 0;

}