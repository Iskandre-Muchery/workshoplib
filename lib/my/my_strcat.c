/*
** EPITECH PROJECT, 2017
** fr
** File description:
** fr
*/

#include <string.h>

char *my_strcat(char *dest, char const *src)
{
	int long_dest = strlen(dest);
	int d;

	for(int d = 0;src[d] != '\0';d++) {
		dest[long_dest + d] = src[d];
		dest[long_dest + d] = '\0';
	}
	return dest;
}
