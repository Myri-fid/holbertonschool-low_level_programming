#include <stdlib.h>
#include <time.h>
/**
 *main -  program will assign a random number to the,
 variable n each time it is executed.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

}

if (n>0) {	
	printf("is positive");
}else (n==0){
	printf("is zero")
}else if{
	printf("is negative")
}
 	return (0);
