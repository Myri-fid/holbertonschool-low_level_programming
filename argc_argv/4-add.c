#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Prints the number of argument
 *@argc: The number of arguments
 *@argv: An array of strings
 *@cal: calcul
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
        int i;
        unsigned int j;
        int sum = 0;

        if (argc > 1)
        {
                for (i = 1 ; i < argc ; i++)
                {
                        for (j = 0 ; argv[i][j] != '\0' ; j++)
                        {
                                if (!isdigit(argv[i][j]))
                                {
                                          printf("Error\n");
                                          return (1);
                                }
                        }
                        sum += atoi(argv[i]);
                }
                printf("%d\n", sum);
        }
        else
        {
                printf("0\n");
                return (0);
        }
        return (0);
}

                
