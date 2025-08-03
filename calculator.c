#include <stdio.h>
#include <stdlib.h>
#include "eval.h"
#define BUFFERSIZE (256)

int main(void) {
	char input[BUFFERSIZE];
	
    printf("reactivate 2nd_branch...\n");

	printf("Enter the expression to be calculated : ");
	fflush(stdout);
	fgets(input, BUFFERSIZE, stdin);
	printf("Result is: %.2f\n", evaluate(input));
    printf("Done\n");
	return EXIT_SUCCESS;
}
