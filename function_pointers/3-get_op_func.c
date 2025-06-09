#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selecciona la función correspondiente al operador
 * @s: operador como string
 * Return: puntero a función o NULL si no coincide
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;
    
    if (s == NULL || strlen(s) != 1)
        return (NULL);

    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s)
            return (ops[i].f);
        i++;
    }
    return (ops[i].f);
}
