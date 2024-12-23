/*
** EPITECH PROJECT, 2017
** fde
** File description:
** fe
*/

#include <string.h>

char *my_strncat(char *dest, char const *src, int nb)
{
	int long_dest = strlen(dest);
	int i;
	i=0;

	for(i = 0; i<nb && src[i] != '0';i++) {
		dest[long_dest + i] = src[i];
	}
	dest[long_dest + i] = '\0';
	return dest;
}
