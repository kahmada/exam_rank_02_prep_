/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:53:58 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/10 18:54:49 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int main(int ac, char **av)
{
    int i;
    if(ac==2)
    {
        while(av[1][i])
        {
            i++;
        }
        i--;
        if(i >= 0)
        {
            while(av[1][i]==32 || av[1][i]== '\t')
                i--; // ici s il a trouve un espace ou tab a la fin de str donc il fait une step en arriere
            while(av[1][i]) // meme  espace alore av[1][i]!= '\0'
            {
                if(av[1][i]==32 || av[1][i] == '\t')//  verification si oui 
                    break;// break
                i--;// sinon il  retourn en ariere jusqu au if(av[1][i]==32 || av[1][i] == '\t')
            }
            i++;// quando il trouve es ou tab il increment d une step
            while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
            {
                write(1, &av[1][i], 1);// tant que la boucle est verifie il ecrit (last word)
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
//grademe 
int main(int ac, char **av)
{
    int i;
    if(ac==2)
    {
        i = 0;
        while(av[1][i])
            i++;
        i--;
        while(av[1][i] && (av[1][i] ==32 || (av[1][i] >=9 && av[1][i] <= 13)))
            i--;
        while(av[1][i] && !(av[1][i] ==32 || (av[1][i] >=9 && av[1][i] <= 13)))
            i--;
        i++;
        while(av[1][i] && !(av[1][i] ==32 || (av[1][i] >=9 && av[1][i] <= 13)))
            write(1, &av[1][i++], 1);
        
        
    }
    write(1, "\n", 1);
}