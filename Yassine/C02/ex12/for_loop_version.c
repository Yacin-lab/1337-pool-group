#include <stdio.h>

/*
  How it works:

  exp: &str[0]  = 00 00 7f ff a3 17 bc 02
  add = &str[0] = 00 00 7f ff a3 17 bc 02
  
  bytes_of_addr = add = 00 00 7f ff a3 17 bc 02
  hna khezzant value dyal add (address of str[0]) ka number Decimal
  had number kaytstora fi 8bytes bdabt dakchi lach drt type dyal variable
  long bach yhez dik 8bytes kolha.
  
  *ptr_to_addr = bytes_of_addr = 02
  pointer 3la value of bytes_of_addr (li hya nit l'address of &str[0])
  but ghayb9a ychof gher 1byte mn dik 8bytes because type 
  of ptr_to_addr is (unsigned char *)
  
  Imp:
  hna sta3malt (unsigned char *) 7it kan9ra raw bytes mn memory so dak byte
  momkin tkon fih FF li hya 255. but kon drt char li range dyalo 7tal 127
  ila 9rit byte li fih FF ghadi yw93 over flow y3ti -1
  donc kaywli t3bir ghalt, base[-1 / 16]
*/
int main()
{
  char base[] = "0123456789abcdef";
  
  char str[] = "Bonjour les aminches\t\n\tc\7 est fou\t"
            "tout\tce qu on peut faire avec\t\t\n"
            "print_memory\n\n\n\tlol.lol\n ";

  void *add = str;
  long bytes_of_addr;
  unsigned char *ptr_to_addr;
  unsigned char *bytes_of_elm = (unsigned char *)add;
  
  if (!sizeof(str))
  {
    return (0);
  }
  
  int jump_line = 0;
  // Print the address of each element in array
  for (; jump_line < sizeof(str); jump_line+=16)
  {
    bytes_of_addr = (long)add + jump_line;
    ptr_to_addr = (unsigned char *)&bytes_of_addr;
    
    for (int i = sizeof(void *) - 1; i >= 0; i--) {
      printf("%c", base[(unsigned char)ptr_to_addr[i]/16]);
      printf("%c", base[(unsigned char)ptr_to_addr[i]%16]);
    }
    printf(": ");

    // Print the elements of array in hexa
    for (int i = jump_line; i < jump_line + 16; i++)
    {
      if (i < sizeof(str))
      {
        printf("%c", base[(unsigned char)bytes_of_elm[i]/16]);
        printf("%c", base[(unsigned char)bytes_of_elm[i]%16]);
      }
      else 
      {
        printf("  ");
      }
      if (i%2)
        printf(" ");
    }
    
    // print the elements in ascii characters
    for (int i = jump_line; i < jump_line + 16 && i < sizeof(str); i++)
    {
      if (bytes_of_elm[i] >= ' ' && bytes_of_elm[i] <= '~')
        printf("%c", bytes_of_elm[i]);
      else 
        printf(".");
    }
    printf("\n");
  }
}