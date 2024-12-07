#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Add file
 * @filename: filename
 * @text_content: texte content
 *
 * Return: 1 success, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int len = 0;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);/*ouvrir file*/
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			len++;
		}
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


