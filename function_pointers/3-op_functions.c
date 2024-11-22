#include "calc.h"

/**
 * op_add - Effectue l'addition de deux entiers
 * @a: Le premier entier
 * @b: Le deuxième entier
 *
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Effectue la soustraction de deux entiers
 * @a: Le premier entier
 * @b: Le deuxième entier
 *
 * Return: La différence entre a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Effectue la multiplication de deux entiers
 * @a: Le premier entier
 * @b: Le deuxième entier
 *
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Effectue la division de deux entiers
 * @a: Le premier entier
 * @b: Le deuxième entier
 *
 * Return: Le quotient de a divisé par b, ou 0 si b est égal à 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (0);  /* Gère la division par zéro */
	}
	return (a / b);
}

/**
 * op_mod - Effectue le modulo de deux entiers
 * @a: Le premier entier
 * @b: Le deuxième entier
 *
 * Return: Le reste de a divisé par b, ou 0 si b est égal à 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (0);  /* Gère la division par zéro */
	}
	return (a % b);
}
