/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:57:19 by saad              #+#    #+#             */
/*   Updated: 2025/11/16 22:57:19 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int i = 'z';
    while(i >= 'a')
    {
        write(1, &i, 1);
        i--;
    }
}
int main()
{
    ft_print_reverse_alphabet();
}
