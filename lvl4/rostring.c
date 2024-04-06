/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:33:55 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/12 15:10:25 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//grademe
#include <unistd.h>
void    rostring(char *s)
{
    int        i = 0;
    int        first_word_length = 0;
    while (s[i])
    { 
        while (s[i] == ' ' || s[i] == '\t')// skip beggining whitespaces
            i++;
        if (s[i] && !(s[i] == ' ' || s[i] == '\t'))
        {   
            if (first_word_length == 0)// if it's the beggining
                while (s[i] && !(s[i] == ' ' || s[i] == '\t'))// keep the length of first word for later
                {
                    first_word_length++;
                    i++;
                }
            else
            {
                while (s[i] && !(s[i] == ' ' || s[i] == '\t'))// for other words, just write it to stdout (+ one whitespace)
                {
                    write(1, &s[i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
        }
    }
    i = 0;// write first word
    while (s[i] == ' ' || s[i] == '\t')
        i++;
    while (first_word_length > 0)
    {
        write(1, &s[i], 1);
        first_word_length--;
        i++;
    }
}

int        main(int ac, char **av)
{
    if (ac > 1 && *av[1])
        rostring(av[1]);
    write(1, "\n", 1);
    return (0);
}