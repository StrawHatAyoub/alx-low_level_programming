#include "main.h"
#include <stdlib.h>

/**
 *  * argstostr - Concatenates all the arguments into a single string
 *   * @ac: Number of arguments
 *    * @av: Array of arguments
 *     *
 *      * Return: Pointer to the concatenated string (Success), or NULL (Error)
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++,
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[index] = av[i][j];
			index++;
		}
		str[index] = ' ';
		index++;
	}
		str[index - 1] = '\0';

		return (str);
}
