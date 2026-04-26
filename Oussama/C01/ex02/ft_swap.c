void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int	main()
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 1337;
	b = 42;
	ft_swap(&a, &b);
	return 0;


}
