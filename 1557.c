/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

int main() {

	/* Declaring Variables */
	int size, row, column, value, higher_number, digits;

	while(1) {

		/* Takes the size of the matrix */
		scanf("%d", &size);

		//printf("Escolha o tamanho da matriz (0 para finalizar): ");
		/* Stop condition */
		if(size == 0){
			break;
        }

		int array[size][size];

		value = 1;

		/* Fill the array with the doubled value of the previous one */
		for(row = 0; row < size; row++) {
			for(column = 0; column < size; column++) {
				array[row][column] = value;
				value *= 2;
			}
			value = array[row][0] * 2;
		}

		/* Number with more digits */
		higher_number = array[size - 1][size - 1];
		digits = 0;

		/* Counts the digits of the largest number in the array */
		do {
			higher_number /= 10;
			digits++;
		} while(higher_number > 0);

		/* Prints with varying size for the array space field */
		for(row = 0; row < size; row++) {
			for(column = 0; column < size; column++) {
				if(column == 0) {
					printf("%*d", digits, array[row][column]);
                } else {
					printf(" %*d", digits, array[row][column]);
                }
			}

			printf("\n");

		}

		printf("\n");

	}

    return 0;

}