#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a function that creates a file
 * @filename: file to create
 * @text_content: text to add
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	for (i = 0; text_content[i]; i++)
		;
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		write(fd, "", 1);
	else
		write(fd, text_content, i);

	close(fd);
	return (1);
}
