#include "calc.h"
/**
 * main - check the code
 * @argc: number
 * @argv: arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
		exit(98);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation || ((operation == op_div || operation == op_mod) && num2 == 0))
		exit(99);

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
