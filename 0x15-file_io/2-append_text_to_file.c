#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, num, rwr;
	
	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;

	rwr = write(fp, text_content, num);

	if (rwr == -1)
		return (-1);
	}

	close(fp);

	return (1);
}

