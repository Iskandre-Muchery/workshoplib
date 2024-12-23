/*
** EPITECH PROJECT, 2017
** jf
** File description:
** hjf
*/

#include <unistd.h>


char *my_strcpy(char *dest, char const *src)
{
	int d;

	d = 0;

	while (src[d] != '\0');
	{
		dest[d] = src[d];
		d = d+1;
	}
	return(0);
}



