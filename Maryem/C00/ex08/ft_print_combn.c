#include<unistd.h>
/*void ft_print_combn(int n)
{
    char i = '0';
    char j;
    while(i <= '8')
    {
        j = i + 1;
        while(j <= '9')
        {
            write(1, &i, 1);
            write(1, &j, 1);
            if(i != '8')
            {
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}*/

void	ft_print_combn(int n)
{
	int tab[9]; // n < 10
	int i, j;

	// 1️⃣ initialize first combination
	for (i = 0; i < n; i++)
		tab[i] = i;

	while (tab[0] <= 10 - n) // loop حتى آخر combinaison
	{
		// 2️⃣ print current combination
		for (i = 0; i < n; i++)
		{
			char c = tab[i] + '0';
			write(1, &c, 1);
		}
		// comma logic
		if (tab[0] != 10 - n)
			write(1, ", ", 2);

		// 3️⃣ generate next combination
		i = n - 1;
		while (i >= 0)
		{
			if (tab[i] < 10 - (n - i))
			{
				tab[i] += 1; // increase current digit
				// صلح باقي digits من بعدو
				for (j = i + 1; j < n; j++)
					tab[j] = tab[j - 1] + 1;
				break;
			}
			else
				i--;
		}
		// i < 0 → وصلنا للآخر combination → while loop غادي يوقف
	}
}
int main()
{
    ft_print_combn(3);
    write(1, "\n", 1);
    return 0;
}