/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:48:25 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/02 14:46:00 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
int main(int ac , char **av)
{
    (void)av;
    put_nbr(ac -1);
    write(1, "\n", 1);
}