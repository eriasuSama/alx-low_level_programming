#include "main.h"
#include <stdio.h>
/**
 * functions: checks for a digit (0 through 9)
 * @c is an input
 * retun: 1 if c is a digit and 0 if not
 **/

int _isdigit (int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
