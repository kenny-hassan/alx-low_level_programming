#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, chk = 0;
	char *buff;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd = -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	chk = read(fd, buff, letters);
	chk = write(STDOUT_FILENO, buff, chk);
	if (chk < 0)
		return (0);

	close(fd);
	free(buff);
	return (chk);
}
