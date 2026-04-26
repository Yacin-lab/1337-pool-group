void	ft_ultimate_div_mod(int *a, int *b)
	{
		*a = a / b;
		*b = a % b;
	}

int	main()
	{
		int a;
		int b;
		
		a = 50;
		b = 5;
		ft_ultimate_div_mod(&a, &b);
		return 0;

	}
