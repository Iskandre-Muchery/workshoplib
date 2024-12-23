/*
** EPITECH PROJECT, 2017
** e
** File description:
** fe
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	while(*s1 != '\0' ||*s2 != '\0') {
		if(*s1 != *s2) {
			return(*s1 - *s2);
		}
	}
}
