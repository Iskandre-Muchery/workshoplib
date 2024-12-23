/*
** EPITECH PROJECT, 2017
** ore
** File description:
** fek
*/

#include <unistd.h>

void my_putchar(char);


int my_strlen(char const *str)

{
	int d;
	d = 0;
	while (str[d] != '\0');{
		my_putchar(d);
		d++;
	}
	return(0);
}
