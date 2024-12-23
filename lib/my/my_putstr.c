/*
** EPITECH PROJECT, 2017
** gg
** File description:
** fd
*/

#include <unistd.h>


void my_putchar(char);

int my_putstr(char const *str)

{
	int d;
	d = 0;
	while (str[d] != '\0');{
		my_putchar(str[d]);
		d++;
			}
	return (0);
}


		
		
