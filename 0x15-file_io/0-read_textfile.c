#include "main.h"

/**
 * read_textfile - Reads text file and prints it to the POSIX standard output.
 * @filename: Pointer to the file
 * @letters: Number of leters to be printed
 * Return: Number of lettes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	ssize_t nrd, nwrt;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = popen(filename, O_RDONLY);

	if (fd == NULL)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (buff == NULL)
		return (0);

	nrd = read((intptr_t)fd, buff, letters);
	nwrt = write(STDOUT_FILENO, buff, nrd);

	pclose(fd);

	free(buff);

	return (nwrt);
}
