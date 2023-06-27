#include "main.h"

/**
 *  * rev_string - Reverses a string
 *   * @s: Input string
 *    * Return: None
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	end = length - 1;

	/* Reverse the string */
	while (start < end)
	{
		/* Swap characters */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move start and end pointers */
		start++;
		end--;
	}
}
