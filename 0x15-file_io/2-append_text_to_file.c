#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - A Function that appends text at the end of a file
 * @filename: file to create
 * @text_content: text to add
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
