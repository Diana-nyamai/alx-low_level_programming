#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void close_file(int from, int to);
/**
  * main - entry point
  * @argc: input
  * @argv: input
  * Return: 0
  */

int main(int argc, char *argv[])
{
	char mem[1024];
	int from, to;
	ssize_t readf, writef;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(from);
		exit(99);
	}
	while ((readf = read(from, mem, 1024)) > 0)
	{
		writef = write(to, mem, readf);
		if (writef != readf)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(from);
			close(to);
			exit(99);
		}
	}
	if (readf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(from);
		close(to);
		exit(98);
	}
	close_file(from, to);
	return (0);
}

/**
  * close_file - entry point
  * @from: input
  * @to: input
  * Return: nothing
  */

void close_file(int from, int to)
{
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

}
