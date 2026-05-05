

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}


/*int	main()
{
	char	s1[] = "oussbak";
	char	s2[] = "oussbak";

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
