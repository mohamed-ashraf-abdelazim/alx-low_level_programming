#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 * @dest: parameter
 * @src: parameter
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, srclen, destlen = 0;

	while (dest[destlen])
		destlen++;
	for (srclen = 0; src[srclen]; srclen++)
		dest[destlen++] = src[srclen];
	return (dest);

}
