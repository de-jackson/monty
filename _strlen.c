#include "monty.h"

/**
 * _strlen - calculates the length of a string.
 * @str: pointer to the character array.
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
