#include <unistd.h>


void put_char(char b)
{
  write (1,&b,1);
}

int ft_putnbr (int nb)
{   
	if (nb == -2147483648)
	{
		put_char('-');
		put_char('2');
		nb = 147483648;
	}
	
	if(nb < 0)
    { 
        nb *= -1;
        put_char('-');
    }
   
    if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		put_char(nb + 48);
	}
}

int main (void)
{
    ft_putnbr(2147483648);
}