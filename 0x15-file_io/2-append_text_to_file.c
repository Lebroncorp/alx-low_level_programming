#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * If text_content is NULL, do not add anything to the file
 * On success or if the file exists returns 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		length = strlen(text_content);
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);
	close(o);

	return (1);
}
