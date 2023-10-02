#include "main.h"
/**
 * create_file - this one will create a file
 * @filename: the file's name to make
 * @text_content: will be written to file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, file_pointr, write_ptr;

	if (!filename)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
	}

	file_pointr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_ptr = write(file_pointr, text_content, i);

	if (file_pointr == -1 || write_ptr == -1)
		return (-1);

	close(file_pointr);

	return (1);
}
