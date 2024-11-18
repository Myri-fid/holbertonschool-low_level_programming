#ifndef CALC_H
#define CALC_H
int (*get_op_func(char *s))(int, int);
int _putchar(char c);
int op_mod(int a, int b);
void print_name(char *name, void (*f)(char *));
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
#endif
~       
