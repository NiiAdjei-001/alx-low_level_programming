#include "main.h"

/**
 * _islower - Is a lower case character
 * @c: character to be passed for check;
 * Description: Checks if the character passed in is a lower case character.
 * Return: 1 (Succcess): is lowercase; 0 (Failed): is any other thing
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
