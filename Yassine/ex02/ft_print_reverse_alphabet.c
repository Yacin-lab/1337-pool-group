/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 19:24:18 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 16:43:48 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';	// 'z' = 122 (integer) in ascii table
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}

}

/*int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}*/
