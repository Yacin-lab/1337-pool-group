/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaadi <ybaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 21:27:36 by ybaadi            #+#    #+#             */
/*   Updated: 2026/04/18 18:56:55 by ybaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*  
    Output format 
    [address]: [hex content] [ascii content]

    Imp:
    char str[] = "hello";
  
    char *ptr = str;        // ptr = &str[0]
    
    char **add = &ptr;      //   add = &ptr   : address of ptr.
                            //  *add = &str[0]: address of str.
                            // **add = str[0]
----------------------------------------------------------------

    char str[] = "hello";

    void *add = str;   
    
    char *ptr = (char *)&add;
    // *ptr = str = &str[0]. but ghayb9a 
    // ychof gher 1byte mn dik 8byte li mkzen fiha address &str[0]
    
    printf("%p\n", str);        // 0x 00 00 7f fe ea 1a 8f 42
    printf("%p", *ptr);         // 0x 42
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_hexa(unsigned char c)
{
    char    *hexaBAse = "0123456789abcdef";
                 
    ft_putchar(hexaBAse[c/16]);
    ft_putchar(hexaBAse[c%16]);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char   *index_of_memory;
    unsigned char   *element_of_array;
    int             i;
    int             k;
    
    if (!size)
    {
        return (addr);
    }
    /*
        print addr (address of each line in array (index of memory)).
        lpointer addr kayhaz 8bytes y3ni khasni nmtal kol 1byte b 2digits fl hexa
        result: exp 00 00 00 01 0a 16 1f 40:
        
        daba kanpointi 3la value dyal addr li hya &str[0]. hada pointer mkhzan f 8bytes
        w drt (unsigned char *) bach nb9a nchof fdik 8bytes byte by byte
    */
    index_of_memory = (unsigned char *)&addr;       // access to address of element
    element_of_array = addr;                        // access to element
    
    i = 0;
    while (i < size)
    {
        /*
            Step 1: print address of pointer (addr) byte by byte
            indexing of bytes:  0--> 00 00 00 01 0a 16 1f 40 <--7
        */
        k = sizeof(addr) - 1;
        while (k >= 0)
        {
            // kansift akhir byte, ft_print_hexa(decimal) ...
            ft_print_hexa(index_of_memory[k--]);
        }
        ft_putchar(':');
        ft_putchar(' ');
        
        // Step 2: print line (16 elements) in hexadecimal
        k = i;
        while (k < i + 16)
        {
            /*
                kaloopi 3la 16 bytes kol mrra (k < i + 16).
                
                madam ba9i mawsltch end of array (k < size) b9a tprinti dik 16bytes,
                ila tsalat array w ba9i maprintit 16bytes kamla fline lkhrani, 
                kandoz lnext condition:
                3mmar blast kol byte b 2space 7ta nkmal 16bytes.

                -> wmabin kol two bytes kandir space.
            */
            if (k < size)
                // hna kola 1byte kanmtlo b 2 digits
                ft_print_hexa(element_of_array[k]);
            else
                // else kola 1byte kanmtlo b 2 space
                write(1, "  ", 2);
            
            if (k % 2)
                ft_putchar(' ');
            k++;
        }
        
        // Step 3: print line (16 elements) as ascii characters
        k = i;
        while (k < i + 16 && k < size)
        {
            if (element_of_array[k] >= ' ' && element_of_array[k] <= '~')
                ft_putchar(element_of_array[k]);
            else
                ft_putchar('.');
            k++;
        }
        
        /*
            7it i katincrement b 16 y3ni flakhir i ghatfot size b 16,
            
            donc kola line kanzido 16 w kanchof ila khrjt 3la size y3ni hadak
            akher line fl array.
        */
        if (i + 16 < size)
            ft_putchar('\n');
        i += 16;
        *index_of_memory += 16;
    }
    return (addr);
}

#include <stdio.h>
int     main(void)
{
    char s[] = "Bonjour les aminches\t\n\tc\7 est fou\t"
            "tout\tce qu on peut faire avec\t\t\n"
            "print_memory\n\n\n\tlol.lol\n ";
    
    // printf("%p\n", (s+16));
    // printf("%c\n", *(s+16));
    
    ft_print_memory(s, sizeof(s));
    ft_putchar('\n');
       
    return (0);
}