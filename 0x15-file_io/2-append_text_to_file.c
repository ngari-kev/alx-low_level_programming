#include "main.h"
/**
 * append_text_to_file - Append text to an existing file.
 *
 * @filename: A pointer to the file to which text is appended.
 * @text_content: A pointer to the text to be appended.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int FileDescriptor, CharactersWritten, TextContentLength = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (TextContentLength = 0; text_content[TextContentLength];)
			TextContentLength++;
	}
	FileDescriptor = open(filename, O_WRONLY | O_APPEND);
	CharactersWritten = write(FileDescriptor, text_content, TextContentLength);
	if (FileDescriptor == -1 || CharactersWritten == -1)
		return (-1);
	close(FileDescriptor);
	return (1);
}
