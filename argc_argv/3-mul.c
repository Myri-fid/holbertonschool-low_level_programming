#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the number of argument
 *@argc: The number of arguments
 *@argv: An array of strings
 *@x: num
 *@y: num
 *@cal: calcul
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
      int x = 0;
      int y = 0;

      if (argc == 3)
      {
            x = atoi(argv[1]);
            y = atoi(argv[2]);
            printf("%d\n", x * j);
      }
      else
      {
            printf("Error\n");
            return (1);
      }
      return (0);
}
