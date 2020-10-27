#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to buffer string is copied into
 * @src: pointer to string to be copied
 *
 * Return: pointer to copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
