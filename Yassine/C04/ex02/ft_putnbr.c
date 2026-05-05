/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 13:26:54 by ybaadi            #+#    #+#             */
/*   Updated: 2026/05/02 18:04:01 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int    number;
    char            buff[12];
    int             i;
    
    // Type casting mn int -> unsig.., to prevent overflow fach nbghi ndrab f -1
    number = (unsigned int)nb;
    
    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }
    else if (nb < 0)
    {
        write(1, "-", 1);
        number *= -1;
    }
    
    i = 0;
    while (number > 0) {
        buff[i++] = (number % 10) + '0';
        number /= 10;
    }

    while(i > 0) {
        ft_putchar(buff[--i]);
    }
}

/*
#include <limits.h>
int     main(void) {
    
    ft_putnbr(INT_MIN);
    
    return (0);
}
*/