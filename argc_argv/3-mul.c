#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the number of argument
 * @argc: The number of arguments
 * @argv: An array of strings
 *@x: num
 *@y: num
 *@cal: calcul
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
      int x = atoi(argv[1]);
      int y = atoi(argv[2]);
      int cal = x *y

      if ( argc < 3 )
      {
            printf( "Error\n", argv[0]);
             return (1);
      }
      printf("%d.\n", cal);
      return(0);
}
