/*
** EPITECH PROJECT, 2017
** neg/pos/nul
** File description:
** meme
*/

#include <unistd.h>

void my_putchar(char);

int my_isneg(int n)

{
	if (n < 0) {
		my_putchar('N');
	}

	else{
		my_putchar('P');
	}

	return (0);
}
