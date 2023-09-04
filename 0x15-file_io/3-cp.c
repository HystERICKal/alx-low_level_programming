#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * helper_func1 - helper function.
 * @name_of_file: file's name.
 * Return: char value.
 */
char *helper_func1(char *name_of_file)
{
	char *store_here = malloc(sizeof(char) * 1024);

	if (!store_here)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name_of_file);
		exit(99);
	}

	return (store_here);
}
/**
 * file_killa - goes diabolical on a file
 * @file_ptr: The file descriptor to be closed.
 */
void file_killa(int file_ptr)
{
	int file_closed = close(file_ptr);

	if (file_closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_ptr);
		exit(100);
	}
}
/**
 * main - The copypasta
 * @argu_count: Argument count
 * @argu_arr: Argument array
 * Return: int
 * Description: copy file content to other file provided
 */
int main(int argu_count, char *argu_arr[])
{
	char *store_here = helper_func1(argu_arr[2]);
	int og_file = open(argu_arr[1], O_RDONLY);
	int soma = read(og_file, store_here, 1024);
	int rookie_file = open(argu_arr[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	int write_ptr;

	if (argu_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	for (;;)
	{
		if (og_file == -1 || soma == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argu_arr[1]);
			free(store_here);
			exit(98);
		}
		write_ptr = write(rookie_file, store_here, soma);
		if (rookie_file == -1 || write_ptr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argu_arr[2]);
			free(store_here);
			exit(99);
		}
		soma = read(og_file, store_here, 1024);
		rookie_file = open(argu_arr[2], O_WRONLY | O_APPEND);
		if (!(soma > 0))
			break;
	}
	free(store_here);
	file_killa(og_file);
	file_killa(rookie_file);

	return (0);
}

