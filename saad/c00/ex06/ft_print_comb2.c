/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:56:41 by saad              #+#    #+#             */
/*   Updated: 2026/04/26 19:50:03 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_comb2(void)
{
    int i = 0;
    int j;
    while (i <= 98)
    {
        j = i + 1;
        while(j <= 99)
        {
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(j / 10 + '0');
            ft_putchar(j % 10 + '0');
            if (!(i == 98 && j == 99))     
            write(1, ", ", 2);
            j++;
            
        }
        i++;
    }
}
int main()
{
    ft_print_comb2();
}
