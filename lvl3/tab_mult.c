#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c , 1);
}
void put_nbr(int n)
{
    int long nb = n;
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    else if(nb > 9)
    {
        put_nbr(nb/10);
        put_nbr(nb%10);
    }
}
int main(int ac,char **av)
{
    int i=1;
    if(ac==2)
    {
        while(i < 10)
        {
            put_nbr(i);
            ft_putchar('x');
            put_nbr(atoi(av[1]));
            ft_putchar('=');
            put_nbr(atoi(av[1])*i);
            write(1,"\n",1);
            i++;

        }

    }
    write(1,"\n",1);
    return 0;
}