/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 19:24:30 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 16:44:22 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/* 3ndi 3loops dima l9ima dyal loop 
   ldakhliya kbar mn li 9bel mnha bach ntfada
   3la repetition w n7afd 3la tartib tasa3odi.

   j = i + 1 w k = j + 1: Hadchi li kaykhli 
   numbers dima ykouno mkhtalfin w f tartib kbir
   (makaynach repetition b7al 111 aw 121).
*/
void ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				
				if (i != '7') 
				{
					ft_putchar(',');
                	ft_putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int	main()
{
	ft_print_comb();
	return (0);
}*/
