#include "main.h"
/**
 * append_text_to_file - adds some text at EOF
 * @filename: file's name
 * @text_content: what to add at EOF
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, file_ptr, write_ptr;

	if (!filename)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
	}

	file_ptr = open(filename, O_APPEND | O_WRONLY);
	write_ptr = write(file_ptr, text_content, i);

	if (file_ptr == -1 || write_ptr == -1)
		return (-1);

	close(file_ptr);

	return (1);
}
