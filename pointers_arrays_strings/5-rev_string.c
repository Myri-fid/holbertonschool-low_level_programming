#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * rev_string - check the code
 *@s : string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int end = 0;
	int start = 0;

	while (s[end] != '\0')
	{
		end++;
	}
	end--;
	while (end > start)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
	printf("\n");
}
