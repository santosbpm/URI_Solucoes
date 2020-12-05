/** 
    Marcos Paulo Baptista
    https://santosbpm.github.io/my-git-site/ 
**/

#include <stdio.h>


int main(){
    /* Declaring Variables */
    int alpha, beta, gama, delta;
     
    //printf("Digite o número de tomadas de cada uma das quatro réguas: ");
    /* Get the number of takes */
    scanf("%d %d %d %d", &alpha, &beta, &gama, &delta);

    /* Prints the maximum number of devices 
       that can be connected to power */
    printf("%d\n", (alpha + beta + gama + delta) - 3);  

	return 0;
}