/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 19:24:38 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/08 16:12:28 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    print_number(long n)
{
    // Technique: Recursion
    // if (n == 0)
    //     return;
    // print_number(n/10);
    // ft_putchar((n%10) + '0');

    // Technique: while loop
    char string[12];
    int i;
    
    i = 0;
    while(n > 0)
    {
        string[i] = (n%10) + '0';
        n /= 10;
        i++;
    }
    
    i--;
    while(i >= 0)
    {
        ft_putchar(string[i]);
        n /= 10;
        i--;
    }
}

void    ft_putnbr(int nb)
{
    // range of long is larger than int
    long number = nb;      // long size = 8bytes, specifier %ld
    
    if(number == 0)
    {
        ft_putchar('0');
        return;
    }
    
    // INT_MIN = -2147483648
    // ila 7waltha lpositive ghatwli 2147483648
    // w had number ma3ndich f type int
    // INT_MAX = 2147483647
    if(number < 0)
    {
        number *= -1;
        ft_putchar('-');
    }
    print_number(number);
}

/*int   main()
{
    ft_putnbr(INT_MIN);

    return (0);
}*/