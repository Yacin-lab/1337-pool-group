
void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main()
{
	int n;
	
	n = 42;
	ft_ft(&n);
	return 0;
}
