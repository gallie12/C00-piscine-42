#include <unistd.h>


void put_char(char b)
{
  write (1,&b,1);
}

int ft_convert_int_char (int nb)
{   
   
    if (nb >= 10)
	{
		ft_convert_int_char(nb / 10);
		ft_convert_int_char(nb % 10);
	}
	else
	{
		put_char(nb + 48);
	}
}

int main (void)
{
    ft_convert_int_char(-26000);
}