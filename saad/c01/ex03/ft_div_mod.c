/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 01:26:10 by saad              #+#    #+#             */
/*   Updated: 2025/12/18 01:55:50 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int div;
	int mod;
	int x = 25;
	int y = 2;
	ft_div_mod(x , y , &div , &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
}
