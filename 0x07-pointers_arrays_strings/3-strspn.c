/**
 *_strspn- gets the length of prefix substring
 *@s:pointer to string to be scanned
 *@accept: string to match
 *
 *description: returns the number of bytes
 *in the initial segment of s which consist
 *only of bytes from accept
 *
 *Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int x = 0;
	unsigned int sum = 0;

	while (*(accept + i))
	{
		while (*(s + x))
		{
			if (*(s + x) == *(accept + i))
			{
				sum += 1;
			}
			x++;
		}
		i++;
	}
	return (sum);
}

