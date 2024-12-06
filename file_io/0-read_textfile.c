#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - check the code
 *@filename: filename
 *@letters: letters
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*ouvrir fichier*/
	char *buffer;/*stockés tmp les données*/
	ssize_t bytesRead, bytesWritten;/*caractere lu et ecrit*/

	if (filename == NULL)/*si nom fichier et null*/
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);/*ouvertur lecture only*/
	if (fd == -1)
	{
		return (0);/*si fichier pas ouvert*/
	}
	buffer = (char *) malloc(letters);/*memoire pour données letters*/
	bytesRead = read(fd, buffer, letters);
	/*donnees dans buffer*/
	if (bytesRead == -1)
	{
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	/*affiche ecran,caractere lu,nbr caractere afficher*/
	if (bytesWritten == -1)
	{
		return (0);
	}
	close(fd);
	return (bytesRead);/*caractere lu*/
}
