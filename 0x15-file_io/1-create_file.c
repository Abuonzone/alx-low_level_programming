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
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
