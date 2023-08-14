#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n < 0){
            printf("n is negative");
        }
 
        else{
            printf("n is positive.");
        }
	return (0);
}
