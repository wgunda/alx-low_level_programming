#include "main.h"

/**
 * binary_to_uint - C onverts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars 0 or 1 - 0.
 * Otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int dec_val = 0;
int i;

if (!b)
return (0);
for (i = 0; b[i]; i++)

{
if (b[i] < '0' || b[i] > '1')
return (0);

dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);

}

