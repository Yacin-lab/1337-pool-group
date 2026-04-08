/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 19:24:34 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/07 16:49:47 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_number(int n)
{
    ft_putchar((n/10) + '0');       // convert integer to character
    ft_putchar((n%10) + '0');       // exampl: 4 (int)  -->  4 + '0' == '4' (char)
}

void    ft_print_comb2(void)
{
	int i;
	int j;

    i = 0;
    while (i <= 98)
    {
        j = i + 1;      // bach deema ghayb9a i < j
        while (j <= 99)
        {
            print_number(i);
            ft_putchar(' ');
            print_number(j);

            if (i != 98)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            j++;
        }
        i++;
    }
}

/*int   main()
{
	ft_print_comb2();
	return (0);
}*/
