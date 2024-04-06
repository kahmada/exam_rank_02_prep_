/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:37:44 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/28 19:31:35 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putsr(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i++], 1);
    }
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if(ac == 3)
    {
        i = 0;
        j=0;
        while(av[1][i] && av[2][j])
        {
            if(av[1][i]==av[2][j])
            {
                i++;
            }
            j++;     
        } 
        if(av[1][i]=='\0')
            ft_putsr(av[1]); 
    }
    write(1, "\n", 1);
}