#include "main.h"
/**
 * verifies if acharacter is uppercase or not
 * @c:tested character
 * return: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
