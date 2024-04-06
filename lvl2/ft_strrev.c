/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:24:05 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/15 05:05:32 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    char temp;
    int len = 0;
    while(str[i])
        i++;
    len = i - 1;
    i = 0;
    while (i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        i++;
        len--;
        
    }
    return (str);
}
int main()
{
    char s[10] = "khadija";
    printf("%s", ft_strrev(s));
}