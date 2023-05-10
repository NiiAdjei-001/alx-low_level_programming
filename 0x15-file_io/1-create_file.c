#include "main.h"
/**
 * create_file - creates a file with content of text_content.
 * @filename: name of file to read from
 * @text_content: string of data with null terminator.
 * Return: if file creation succesful 1 else if error -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fwd, writecheck = -1;

	if (!filename)
		return (-1);
	fwd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fwd == -1)
		return (-1);
	if (!text_content)
	{
		close(fwd);
		return (1);
	}
	while (text_content != '\0')
	{
		writecheck = write(fwd, text_content, sizeof(char));
		if (writecheck == -1)
			return (-1);
		text_content++;
	}
	close(frd);
	return (1);
}
