/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:21:58 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/20 17:24:07 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}
int main()
{
    char *s= "khadija";
    printf("%d", ft_strlen(s));
}