/*
** EPITECH PROJECT, 2017
** d
** File description:
** d
*/

#include <unistd.h>
#include <string.h>

void my_putchar(int);

int my_str_isalpha(char const *str)
{
	int i = 0;
	int longu = strlen(str);

	while(str[i] != '\0') {
		for(;str[i] != longu;) {
			if(str[i] >= 'a' || str[i] <= 'z' || str[i] >= 'A' || str[i] <= 'Z') {
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
