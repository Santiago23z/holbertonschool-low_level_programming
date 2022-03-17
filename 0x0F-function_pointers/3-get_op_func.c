#include "3-calc.h"

/**
 * *get_op_func - this is main function
 * @s: this is the function
 * Return: NULL or *S
 */
int (*get_op_func(char *s))(int, int)
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    