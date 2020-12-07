/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

/* function with the number of stairs */
int stairs(int *sequence, int size) {

    /* Declaring Variables */
    int stair_amount = 1;
	int aux, temporary, alpha;

	if (size == 1 || size == 2) {
		return 1;
    }

	aux = sequence[0] - sequence[1];
	for (alpha = 2; alpha < size; alpha++) {

		temporary = sequence[alpha - 1] - sequence[alpha];
		if (temporary != aux) {
			aux = temporary; 
            stair_amount++;
        }

	}

	return stair_amount;

}

int main () {

    /* Declaring Variables */
	int alpha, size;

	scanf("%d", &size);

    /* Declaring Variables */
	int sequence[size];

	for (alpha = 0; alpha < size; alpha++) {
		scanf("%d", &sequence[alpha]);
    }

	printf("%d\n", stairs(sequence, size));

    return 0;

}