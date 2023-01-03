/**
* _strspn - gets the length of a prefix substring.
* (I still do not know what that means)
* @s: String that will be seached.
* @accept: accepted character substring.
* Return: length (Succ).
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
