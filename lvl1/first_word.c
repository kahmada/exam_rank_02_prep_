/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:48:00 by kahmada           #+#    #+#             */
/*   Updated: 2024/01/30 18:31:24 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if(argc >= 2)
    {
        i = 0;
        if(argv[1][i]==32 || argv[1][i] == 9) 
            i++;
        while(argv[1][i] && argv[1][i] != 32 && argv[1][i] != 9 )
        {
            write(1, &argv[1][i], 1);
             i++;
        }
       
    }
}