#include "holberton.h"
/**
 * print_oct - print octal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_oct(va_list list)
{
	char *output;
	int i = 0;
	int num_cp;
	int len;
	unsigned int num = va_arg(list, unsigned int);

	len = 0;
	num_cp = num;
	while (num_cp > 0)
	{
		num_cp /= 8;
		len++;
	}
	output = malloc(sizeof(char) * len + 1);

	if (output == NULL)
	{
		free(output);
		return (NULL);
	}
	while (len - 1 >= 0)
	{
		output[i] = ((num % 8) + '0');
		num /= 8;
		i++;
		len--;
	}
	rev_string(output);

	output[i] = '\0';

	return (output);
}
