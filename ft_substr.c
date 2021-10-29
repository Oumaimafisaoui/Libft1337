char *ft_substr(const char *s, int start, size_t len)
{
	unsigned int index;
	size_t len_s;
	char *buffer;

	index = 0;
	len_s = ft_strlen(s);

	if(s == NULL)
		return (NULL);
	buffer = (char *)malloc(len + 1);

	if(buffer == NULL)
		return (NULL);
	if(len_s > start)
	{
		while(s[start + index] && len > index)
		{
			buffer[index] = s[start + index];
			index++;
		}
	}
	buffer[index] = '\0';
	return (buffer);
}


