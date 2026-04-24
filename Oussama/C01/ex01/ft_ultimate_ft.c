
void	ft_ultimate_ft(int *********nbr)
	{
		*********nbr = 42;
	}

int	main()
	{
		int num;
		int *p;
		int **p1;
		int ***p2;
		int ****p3;
		int *****p4;
		int ******p5;
		int *******p6;
		int ********p7;
		int *********p8;

		num = 42;
		p = &num;
		p1 = &p;
		p2 = &p1;
		p3 = &p2;
		p4 = &p3;
		p5 = &p4;
		p6 = &p5;
		p7 = &p6;
		p8 = &p7;
		
		ft_ultimate_ft(p8);
		write(1, "\n", 1);
		return 0;

	}
