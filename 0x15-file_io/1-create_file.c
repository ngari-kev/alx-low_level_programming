#include "main.h"
/**
 * create_file - Create a new file or truncate an existing one.
 *
 * @filename: A pointer to the file to be created or truncated.
 * @text_content: A pointer to the text to write to the file.
 *
 * Return:
 * - On success, returns 1.
 * - On any failure or error, returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, charactersToWrite, textContentLength = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (textContentLength = 0; text_content[textContentLength];)
			textContentLength++;
	}
	fileDescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	charactersToWrite = write(fileDescriptor, text_content, textContentLength);
	if (fileDescriptor == -1 || charactersToWrite == -1)
		return (-1);
	close(fileDescriptor);
	return (1);
}
