#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - check the code
 *@text_content: filename
 *@filename: filename
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	int len = 0;


	if (filename == NULL)/*si nom fichier et null*/
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
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
