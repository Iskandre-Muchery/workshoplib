/*
** EPITECH PROJECT, 2017
** d
** File description:
** d
*/

#include <unistd.h>
#include <string.h>

void my_putchar(int);

int my_str_isnum(char const *str)
{
	int i = 0;
	int longu = strlen(str);

	while(str[i] != '\0') {
		for(;str[i] != longu;) {
			if(str[i] >= '0' || str[i] <= '9') {
				my_putchar('1');
			}
			else {
				my_putchar('0');
			}
		i = i + 1;
		}
	}		
	return(0);
}

