#include "main.h"
#include <string.h>

/**
  * create_file - creates a file
  * @filename: filename
  * @text_content:  content
  * Return: new file
  */

int create_file(const char *filename, char *text_content)
{
	int o, r;
	int len = strlen(text_content);
	char *buf;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (o == -1)
		exit(1);
	write(o, text_content, len);
	if (text_content == NULL)
	{
		return (o);

	}

	close(o);

	o = open(filename, O_RDONLY);
	if (o == -1)
		exit(1);
	buf = text_content;
	r = read(o, buf, len);
	close(o);

	return (r);
}
