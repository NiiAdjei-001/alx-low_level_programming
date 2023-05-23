#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * checkargument - checks if 3 arguments have been passed into main.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 */
void checkargument(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp %s %s\n", argv[1], argv[2]);
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

	printf("[CHECK]:: Creating buffer\n");
	buffer = malloc(buffer_size * sizeof(char));
	printf("[CHECK]:: Checking argument count\n");
	checkargument(argc, argv);
	printf("[CHECK]:: Open source file\n");
	openfilesource(&file_from_d, argv);
	printf("[CHECK]:: Open sink file\n");
	openfilesink(&file_to_d, argv);
	readcheck = read(file_from_d, buffer, buffer_size);
	while (readcheck > 0)
	{
		printf("[CHECK]:: readcheck: [%ld]\n", readcheck);
		writecheck = dprintf(file_to_d, "%s", buffer);
		printf("[CHECK]:: writecheck: [%ld]\n", writecheck);
		if (writecheck == -1)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
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
