#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: The name of the file to read
 * @letters: The maximum number of characters to read and print
 *
 * Return: The actual number of characters read and printed,
 * or 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t read_bytes;
	ssize_t written_bytes;


	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_bytes = fread(buffer, sizeof(char), letters, file);

	if (read_bytes == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[read_bytes] = '\0';
	written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	if (written_bytes == -1 || written_bytes != read_bytes)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (read_bytes);
}

