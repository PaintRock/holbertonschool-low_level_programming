#include "main.h"
/**
* _isalpha - Finds lowercase 'c'.
* @c: cannot think of what to say
* Return: 1 if int c is an alphabet character
*
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
