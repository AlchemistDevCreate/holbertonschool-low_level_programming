#ifndef CALC_H
#define CALC_H

/**
 * struct op - Estructura para definir una operación
 * @op: operador como string
 * @f: puntero a función que ejecuta la operación
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
