#include "holberton.h"
/**
 * print_hex - print hexadecimal from decimal
 * @list: list
 * Return: pointer to string
 */

char *print_hex(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *output;
	int i = 0;
	int tmp;
	int len = _numlen(num);

	output = malloc(sizeof(char) * len + 1);

	if (output == NULL)
	{
		free(output);
		return (0);
	}

	while (num != 0)
	{
		tmp = 0;
		tmp = num % 16;

		if(tmp < 10)
		{
			output[i] = tmp + 48;
			i++;
		}
		else
		{
			output[i] = tmp + 55;
			i++;
		}

		num = num / 16;
	}

	output[i] = '\0';

	return (output);
}
