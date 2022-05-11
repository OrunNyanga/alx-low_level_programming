#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size to be allocated
 * Return: pointer to allocated memory or exit with 98
 **/

 * malloc_checked - allocate a space
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;
void *x;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
x = malloc(b);
if (x == NULL)
{
	exit(98);
}
return (x);
}
