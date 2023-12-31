#include "main.c"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the string that will be modified.
 * @src: the string that will concatenate to @dest.
 * @n: copy up to position 'n'
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}
	while (index_02 < n && src[index_02] = src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
