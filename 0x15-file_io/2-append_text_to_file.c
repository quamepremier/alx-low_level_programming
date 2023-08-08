#include "main.h"

/**
 * append_text_to_file - append a text at the end of file.
 * @filename: a pointer to the name of the file.
 * @text_content: the string to add to the end of file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int k, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	l = write(k, text_content, len);

	if (k == -1 || l == -1)
		return (-1);

	close(k);

	return (1);
}
