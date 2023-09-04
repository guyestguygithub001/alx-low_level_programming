#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To the Read text file print to the STDOUT
 * @filename: the text file that is being read.
 * @letters: for no. of letters in which is to be read.
 * Return: w- an actual no. of bytes to be read and printed,
 *        0 when the function fails or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
