#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int boolean (char a,char b,char c)
{

    if(a <='7'-1 && b <= '8' && c <= '9')
    {
        return 1;
    }
    
    else 
    {
        return 0;
    }
}

int verif_bool(char a, char b, char c,char v)
{ 
    if( boolean(a,b,c) == 1 )
    {   
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        ft_putchar(v);
    }

    else
    {
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
    }
    


}
void	ft_print_comb(void)
{
	char d;
	char e;
	char f;
    char v;
    v=',';
	d = '0';
    

	while (d <= '7')
	{
        e = d+1;
		while (e <= '8')
		{
            f = e+1;			
           while (f <= '9')

			{   
              
              verif_bool(d,e,f,v);
                
				f++;
			}
			e++;
		}
		d++;
	}
}

int main (void)
{
    ft_print_comb();
    return 0;
}