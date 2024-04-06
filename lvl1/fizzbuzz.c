/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:28:24 by kahmada           #+#    #+#             */
/*   Updated: 2024/01/30 17:46:33 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
    int long nb = n;
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb/10);
        ft_putnbr(nb%10);
    }
}
int		main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
            write (1, "\n", 1);
		i++;
		
	}
    
}