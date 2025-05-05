#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the contents of an integer array.
 * @a: Pointer to the beginning of the array.
 * @n: Number of elements in the array.
 */

void reverse_array(int *a, int n)
{
		int *start = a;
		int *end = a + n - 1;
		int temp;

		while (start < end)
		{
			temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
}