char	*ft_strchr_type(const char *s)
{
	int i;

	i = 0;
	while (s[i] && s[i] != 'c' && s[i] != 's' && s[i] != 'p' && s[i]
	!= 'x' && s[i] != 'X' && s[i] != 'd' && s[i] != 'i' && s[i] != 'u')
	{
		 printf("i : %d\n", i);
		i++;
	}
	if (s[i] && s[i] == 'c' && s[i] == 's' && s[i] == 'p' && s[i] == 'x' && s[i] == 'X' &&
	s[i] == 'd' && s[i] == 'i' && s[i] == 'u')
	{
		return (i);
	}
	return (0);
}

