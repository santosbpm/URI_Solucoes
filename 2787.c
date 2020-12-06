/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>

int main () {

    /* Declaring Variables */
	int row, column;

    /* Receives row and column number */
	scanf("%d", &row) ;
    scanf("%d", &column);

    /* Condition to print the color of the house */
	if (row % 2 == 1 && column % 2 == 1)
		printf("1\n");
	else if (row % 2 == 0 && column % 2 == 0)
		printf("1\n");
	else
        printf("0\n");

    return 0;

}