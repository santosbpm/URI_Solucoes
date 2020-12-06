/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


/* Function for sorting the array */
void sort(int *sides, int size){

	/* Declaring Variables */
	int alpha, beta, temporary;

	for(beta = size; beta > 0; beta--) {
		for(alpha = 0; alpha < size - 1; alpha++) {
			if(sides[alpha] > sides[alpha+1]) {
				temporary = sides[alpha+1];
				sides[alpha+1] = sides[alpha];
				sides[alpha] = temporary;
			}
		}
	}
}

/* Function that defines if it's a triangle and what's its type */
void triangle(int *sides) {
	if(sides[0] + sides[1] <= sides[2]) {
		printf("Invalido\n");
	} else if(sides[0] == sides[1] || sides[1] == sides[2]) {
		if(sides[0] == sides[2]) {
			printf("Valido-Equilatero\n");
		} else {
			printf("Valido-Isoceles\n");
		}
	}
	else printf("Valido-Escaleno\n");
	
	if((sides[0] + sides[1] <= sides[2]));
	else if((sides[0]*sides[0]) + (sides[1]*sides[1]) == sides[2]*sides[2]){
		 printf("Retangulo: S\n");  
	} else {
		printf("Retangulo: N\n");
	}
}

int main(){

	/* Declaring Variables */
	int sides[3];

	/* Receives the sides of the triangle for testing */
	scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);
	
	sort(sides, 3);

	triangle(sides);

	return 0;
}