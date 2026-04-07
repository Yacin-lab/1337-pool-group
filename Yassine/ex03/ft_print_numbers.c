/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 19:24:23 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 16:43:59 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char start;
	char end;

	start = '0';
	end = '9';
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}

/*int	main()
{
	ft_print_numbers();
	return(0);
}*/
