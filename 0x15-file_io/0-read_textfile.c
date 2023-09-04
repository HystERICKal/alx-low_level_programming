#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads and prints txt file
 * @filename: file letters_read be read
 * @letters: the no. of letters 2 read & print
 * Return: letters read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *store_here = malloc(sizeof(char) * letters);
	ssize_t the_file = open(filename, O_RDONLY);
	ssize_t letters_read = read(the_file, store_here, letters);
	ssize_t letters_read_printed = write(STDOUT_FILENO, store_here, letters_read);

	if (the_file == -1)
		return (0);

	free(store_here);
	close(the_file);
	return (letters_read_printed);
}

