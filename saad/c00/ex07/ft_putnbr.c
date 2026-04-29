/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:58:59 by saad              #+#    #+#             */
/*   Updated: 2026/04/27 00:22:10 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	long	num;
	int	i;
	char arr[10];
	num = nb;
	if(num == 0)
	{
		ft_putchar('0');
		return;
	}
	if(num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	i = 0;
	while(num > 0)
	{
		arr[i] = num % 10 + '0';
		num /= 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ft_putchar(arr[i]);
	}
}
int	main()
{
	ft_putnbr(0);
}
