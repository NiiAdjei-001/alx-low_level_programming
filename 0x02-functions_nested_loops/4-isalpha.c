#include "main.h"

/**
 * _isalpha - is an alphabet
 * @c: character to be passed for check;
 * Description: Checks if the character passed
 *		in is an alphabet regardless of the case
 * Return:	1 (Succcess): is alphabet
 *		0 (Failed): is any other thing
 */
int _isalpha(int c)
{
	int condition1;
	int condition2;

	condition1 = (c >= 97) && (c <= 122);
	condition2 = (c >= 65) && (c <= 90);

	if (condition1 || condition2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
