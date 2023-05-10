#include "main.h"
/**
 * read_textfile - Reads textfile and print to standard output.
 * @filename: name of file to read from
 * @letters: max number of bytes capable of being read
 * Return: returns the number of character bytes read from file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int frd, readcheck = -1, writecheck;
	size_t readcount = 0;
	char ch;

	if (!filename)
		return (0);
	frd = open(filename, O_CREAT | O_RDONLY, S_IRUSR | S_IRGRP | S_IROTH);
	if (frd == -1)
		return (0);
	while (readcount != letters)
	{
		readcheck = read(frd, &ch, sizeof(ch));
		if (readcheck == 0)
		{
			close(frd);
			return (readcount);
		}
		readcount++;
		writecheck = write(STDOUT_FILENO, &ch, sizeof(char));
		if (writecheck == -1)
			return (0);
	}
	close(frd);
	return (readcount);
}
