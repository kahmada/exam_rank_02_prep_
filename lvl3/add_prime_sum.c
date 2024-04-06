/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:42:43 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/11 18:37:40 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//grademe
#include <unistd.h>

int ft_atoi(char *s)
{
    int result = 0;
    int signe = 1;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-')
    {
        signe = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    
    return signe * result;
}


int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char digit = n % 10 + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{

	if (ac == 2)
	{
		int	nbr = ft_atoi(av[1]);
		int	sum = 0;

		while (nbr > 0)
		{
			if (is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		put_nbr(sum);
        write(1, "\n", 1);
	}
    else{
        write(1, "0", 1);
	    write(1, "\n", 1);
    }
    
	return (0);
}