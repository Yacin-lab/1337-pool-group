/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:46:46 by ybaadi            #+#    #+#             */
/*   Updated: 2026/05/05 13:28:46 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
    Conversion Logic, Decimal to Base:

       - RULE: Repeatedly DIVIDE by base length and take the REMAINDER.
       - ORDER: Read remainders from bottom to top (Reverse).
       - Example (10 to Binary):
            10 / 2 = 5 (rem 0)
            5 / 2 = 2 (rem 1)
            2 / 2 = 1 (rem 0)
            1 / 2 = 0 (rem 1) -> Result: 1010
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     is_base_valid(char *base)
{
    int     i;
    int     j;

    i = 0;
    while (base[i])
    {
        if (base[i] == '-' || base[i] == '+')
        {
            return (0);
        }
        
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
    /* Frequency table tec
    char    buff[256] = {0};
    i = 0;
    while (base[i])
    {
        // 1. Check characters
        if (base[i] == '-' || base[i] == '+')
            return (0);

        // 2. Check if already seen
        if (buff[(unsigned char)base[i]] == 1)
            return (0);
        
        // 3. Mark as seen
        buff[(unsigned char)base[i]]++;
        i++;
    }
    return (1);
    */
}

int     ft_strlen(char *str)
{
    unsigned int     index;

    index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return (index);
}

// Finction: displays a number in a base system in the terminal.
void    ft_putnbr_base(int nbr, char *base)
{
    // momkin ndir size 32: asghar base howa base 2 momkin ytpresonta f INT_MIN b 32 number (char)
    char    buff[1000];
    int     base_nbr;
    int     rest;
    long    divi;
    int     i;

    // 1. Validate base (Len_str_base > 1, no doubles, no + or -)
    base_nbr = ft_strlen(base);
    if (!is_base_valid(base) || base_nbr < 2)
    {
        return;
    }
    // 2. Handle zero case (bach maykhrj bla mayprinti walo. print first char of base)
    if (nbr == 0)
    {
        ft_putchar(base[nbr]);
        return;
    }

    // 3. Handle INT_MIN & negatives using long
    divi = (long)nbr;
    if (divi < 0)
    {
        ft_putchar('-');
        divi *= -1;
    }
    
    // 4. Convert number: Store remainders (base symbols) in buffer
    i = 0;
    while (divi != 0)
    {
        rest = divi % base_nbr;
        buff[i++] = base[rest];

        divi /= base_nbr;
    }
    // 5. Print buffer in reverse order
    while (i > 0) {
        ft_putchar(buff[--i]);
    }   
}


#include <stdio.h>
#include <limits.h>
int     main(void) {
    
    int     n = INT_MIN;
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";
    char    *new = "poneyvif";

	write(1, "decimal to decimal:\t", 20);
	ft_putnbr_base(n, dec);
	write(1, "\ndecimal to binary:\t", 20);
	ft_putnbr_base(n, bin);
	write(1, "\ndecimal to octal:\t", 20);
	ft_putnbr_base(n, oct);
	write(1, "\ndecimal to hexadecimal:\t", 26);
	ft_putnbr_base(n, hex);
    write(1, "\ndecimal to newbase:\t", 22);
	ft_putnbr_base(n, new);
	write(1, "\n", 1);

    return (0);
}
