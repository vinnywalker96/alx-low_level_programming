#include "main.h"

/**
  * *_strcpy - copies the string pointed to by src
  * @dest: dereferencing var
  * @src: pointer var
  * Return: str
  */

char *_strcpy(char *dest, char *src)
{
	char *str = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (str);

}
