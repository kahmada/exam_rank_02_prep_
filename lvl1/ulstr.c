/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:18:42 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/20 20:25:20 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int main(int ac, char **av)
{
    int i;
    if(ac==2)
    {
        i = 0;
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i]-=32;
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i]+=32;
            write(1, &av[1][i], 1);
            i++;
        }
    }
}