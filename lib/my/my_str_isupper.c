/*
** EPITECH PROJECT, 2017
** fe
** File description:
** fd
*/

#include <unistd.h>
#include <string.h>

void my_putchar(int);

int my_str_isupper(char const *str)
{
	int i = 0;
	int longu = strlen(str);

	while(str[i] != '\0') {
		for(;str[i] != longu;) {
			if(str[i] >= 'A' || str[i] <= 'Z') {
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
