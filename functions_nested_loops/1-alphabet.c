#include "main.h"

/**
*main - _putchar the alphabet, in lowercase
*followed by a new line
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
