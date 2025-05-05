#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 8

/**
 * Genera un caracter aleatorio válido para la contraseña.

 * Retorno: El caracter aleatorio generado.
*/

char generate_random_char()
{
	int random_number = rand() % 94 + 33;
	return ((char) random_number);
}

/**
 * Genera una contraseña completa utilizando caracteres aleatorios válidos.
 * Retorno: Puntero a la contraseña generada. La memoria debe liberarse con free().
*/

char *generate_password()
{
	int i;
	char *password = malloc(PASSWORD_LEN + 1);
	if (!password)
	{
		return (NULL);
	}

	for (i = 0; i < PASSWORD_LEN; i++)
	{
		password[i] = generate_random_char();
	}

	password[PASSWORD_LEN] = '\0';

	return (password);
}

/**
 *  Función principal del programa.
*/

int main()
{
	int i;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		char *password = generate_password();
		if (password)
		{
			printf("%s\n", password);
			free(password);
		}
		else
		{
			printf("Error al generar contraseña.\n");
		}
	}

	return (0);
}
