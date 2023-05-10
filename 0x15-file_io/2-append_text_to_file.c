#include "main.h"
/**
 * append_text_to_file - appends text to already existing file..
 * @filename: name of file to append to
 * @text_content: string of data with null terminator.
 * Return: if succesful 1 else if error -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fad, writecheck = -1;

	if (!filename)
		return (-1);
	fad = open(filename, O_RDWR | O_APPEND, 664);
	if (fad == -1)
		return (-1);
	if (!text_content)
	{
		close(fad);
		return (1);
	}
	while (*text_content != '\0')
	{
		writecheck = write(fad, text_content, sizeof(char));
		if (writecheck == -1)
			return (-1);
		text_content++;
	}
	close(fad);
	return (1);
}
