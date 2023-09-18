#include "main.h"
/**
 *_strncpy - A function that copies a string
 *@dest: A ptr  char that will be changed
 *@src: A Ptr to a character that will be changed
 *@n: char
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);

}
