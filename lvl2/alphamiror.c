/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamiror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:27:19 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/20 10:27:24 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    if(ac==2)
    {
        i = 0;
        while(av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i]='z'-(av[1][i]-'a');
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i]='Z'-(av[1][i]-'A');
            write(1,&av[1][i],1);
            i++;
                
        }
    }
    write(1,"\n",1);
    return 0;
}
