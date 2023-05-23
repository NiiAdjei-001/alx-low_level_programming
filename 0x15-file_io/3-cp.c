#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * checkargument - checks if 3 arguments have been passed into main.
 * @argc: number of arguments..
 *
 */
void checkargument(int argc)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * openfilesource - opens the file source.
 * @file_from_d: file source descriptor.
 * @argv: array of arguments.
 *
 */
void openfilesource(int *file_from_d, char **argv)
{
	*file_from_d = open(argv[1], O_RDONLY);
	if (*file_from_d == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
/**
 * openfilesink - opens the file sink.
 * @file_to_d: file sink descriptor.
 * @argv: array of arguments.
 *
 */
void openfilesink(int *file_to_d, char **argv)
{
	int flag = O_RDWR | O_CREAT | O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	*file_to_d = open(argv[2], flag, mode);
	if (*file_to_d == -1)
	{
		fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main- copy a file from a source (argv[1]) to destination (argv[2]).
 * @argc: argument count.
 * @argv: argument vectors.
 * Return: always returns 0.
 */
int main(int argc, char **argv)
{
	size_t buffer_size = 1024;
	ssize_t readcheck = 0, writecheck = 0;
	char *buffer;
	int file_from_d, file_to_d;

	buffer = malloc(buffer_size * sizeof(char));
	checkargument(argc);
	openfilesource(&file_from_d, argv);
	openfilesink(&file_to_d, argv);
	readcheck = read(file_from_d, buffer, buffer_size);
	while (readcheck > 0)
	{
		writecheck = dprintf(file_to_d, "%s", buffer);
		if (writecheck == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		free(buffer);
		buffer = malloc(buffer_size * sizeof(char));
		readcheck = read(file_from_d, buffer, buffer_size);
	}
	if (close(file_from_d) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (close(file_to_d) == -1)
	{
		fprintf(stderr, "Error Cant close fd %s\n", argv[2]);
		exit(100);
	}
	free(buffer);
	return (0);
}
