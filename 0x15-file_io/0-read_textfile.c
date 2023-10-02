#include "main.h"
/**
 * read_textfile - Read a text file and return its content as a string.
 *
 * @filename: The name of the file to be read.
 * @letters: The maximum number of characters to read from the file.
 *
 * The function opens the specified text file, reads up to 'letters' characters
 * from it, and returns the content as a dynamically allocated string.
 * The string is null-terminated and should be freed by the caller when
 * no longer needed.
 *
 * Return: If successful, the function returns the number of characters read.
 *         If an error occurs, it returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FileDescriptor;
	ssize_t CharactersRead;
	char *buffer;

	FileDescriptor = open(filename, O_RDONLY);
	if (FileDescriptor == -1)
	{
		/* Handle file open error */
		return (0);
	}

	buffer = malloc(letters + 1);
	/* +1 for null terminator */
	if (buffer == NULL) /*memory allocation error*/
	{
		close(FileDescriptor);
		return (0);
	}

	CharactersRead = read(FileDescriptor, buffer, letters);

	if (CharactersRead == -1)
	{
		/* Handle read error */
		close(FileDescriptor);
		free(buffer);
		return (0);
	}
	/* Null-terminate the buffer */
	buffer[CharactersRead] = '\0';
	close(FileDescriptor);
	/* At this point, 'buffer' contains the file content as a string */
	return (CharactersRead);
}

