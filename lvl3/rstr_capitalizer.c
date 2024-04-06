/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:46:37 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/02 19:08:40 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' \
                    || str[i + 1] == '\t' || str[i + 1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc == 1)
        write(1, "\n", 1);
    else
    {
        i = 1;
        while (i < argc)//hna knswiviw nombre des arg b i 7it ila 3tina 3 arg matalan kigad kola arg f star
        {
            rstr_capitalizer(argv[i]);
            write(1, "\n", 1);
            i += 1;
        }
    }
    return (0);
}