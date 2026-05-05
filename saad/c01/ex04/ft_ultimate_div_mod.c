/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 02:18:38 by saad              #+#    #+#             */
/*   Updated: 2025/12/18 02:41:10 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_a = *a;
	int temp_b = *b;
	*a = temp_a / *b;
	*b = temp_a % *b;
}
int main()
{
	int x = 40;
	int y = 4;
	printf("avant = %d\n", x );
	printf("avant = %d\n", y );
	ft_ultimate_div_mod(&x , &y);
	printf("div = %d\n", x);
	printf("mod = %d\n", y);
}
