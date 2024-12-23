/*
** EPITECH PROJECT, 2017
** ijed
** File description:
** f
*/

#include <unistd.h>

void my_putchar(char);

void my_putstr(char const *c);

char *my_strncpy(char *dest, char const *src, int n)
{
	int d;
	d=0;

	if (n>d){
		while(src[d] != '\0') {
			dest[n] = src[d];
			d = d+1;}
	}
	else{
		while(src[d] != src[n-1]) {
			dest[d] = src[d];
			d = d+1;
		}
			
	}
	return(0);
}
