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
	n= rand() - RAND_MAX / 2;
	printf("%d \n", n);


if (n>0) {	
	printf("is positive\n");
}else (n==0){
	printf("is zero\n")
}else if{
	printf("is negatie\n")
}
 	return (0);
}
