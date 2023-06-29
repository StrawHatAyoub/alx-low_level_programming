#include "main.h"

/**
 *  * cap_string - Capitalizes all words of a string.
 *   * @str: The string to be capitalized.
 *    *
 *     * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;
	int word_boundary = 1;

	while (str[index])
	{
		if (word_boundary && (str[index] >= 'a' && str[index] <= 'z'))
			str[index] -= 32;

		word_boundary = (str[index] >= ' ' && str[index] <= '/') ||
			(str[index] >= ':' && str[index] <= '@') ||
			(str[index] >= '[' && str[index] <= '`') ||
			(str[index] >= '{' && str[index] <= '}');

		index++;
	}

	return (str);
}
