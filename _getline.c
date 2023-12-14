#include "horla.h"
/**
* _getline - read input from user
* Return: input on a buffer
*/
char *_getline()
{
	int i, rid, buffsize = BUFSIZE;
	char x = 0, *buffer, *buf;

	buffer = malloc(buffsize);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = 0; x != EOF && x != '\n'; i++)
	{
		fflush(stdin);
		rid = read(STDIN_FILENO, &x, 1);
		if (rid == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		buffer[i] = x;
		if (buffer[0] == '\n')
			return (enter(buffer));
		if (i >= buffsize)
		{
			buffer = realloc(buffer, (buffsize + 2));
			if (buffer == NULL)
			{
				free(buffer);
				return (NULL);
			}
		}
	}
	buffer[i] = '\0';
	buf = space(buffer);
	free(buffer);
	hashtag_handler(buf);
	return (buf);
}
/**
 * enter - Handles new_line char input
 * @string: Str to be handled
 * Return: Empty str
 */
char *enter(char *string)
{
	free(string);
	return ("\0");
}

/**
 * space - Modifies the input str to remove preceeding whitespaces
 * @str: Input to be modified
 * Return: Returns the modified str
 */
char *space(char *str)
{
	int i, k = 0;
	char *buff;

	buff = malloc(sizeof(char) * (_strlen(str) + 1));
	if (buff == NULL)
	{
		free(buff);
		return (NULL);
	}
	for (i = 0; str[i] == ' '; i++)
		;
	for (; str[i + 1] != '\0'; i++)
	{
		buff[k] = str[i];
		k++;
	}
	buff[k] = '\0';
	if (buff[0] == '\0' || buff[0] == '#')
	{
		free(buff);
		return ("\0");
	}
	return (buff);
}
/**
 * hashtag_handler - function that removes everything after '#'
 * @buff: input buffer
 * Return: nothing
 */
void hashtag_handler(char *buff)
{
	int i;

	for (i = 0; buff[i] != '\0'; i++)
	{
		if (buff[i] == '#' && buff[i - 1] == ' ' && buff[i + 1] == ' ')
		{
			buff[i] = '\0';
		}
	}
}

