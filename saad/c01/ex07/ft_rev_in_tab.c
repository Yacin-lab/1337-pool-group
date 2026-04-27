/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:25:57 by saad              #+#    #+#             */
/*   Updated: 2026/04/27 13:37:09 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_in_tab(int *tab, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap(&tab[start], &tab[end]);
		start++;
		end--;
	}
}

int	main(void)
{
	int	arr[5] = {5, 4, 3, 2, 1};
	int	i;

	ft_rev_in_tab(arr, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}

