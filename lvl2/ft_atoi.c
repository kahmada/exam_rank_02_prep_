/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:54:47 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/10 18:05:23 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *s)
{
    int result = 0;
    int signe = 1;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-')
    {
        signe = -1;
        s++;
    }
    else if (*s == '+')
    {
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }
    
    return signe * result;
}

int main()
{
    char *s = "000000003";
    printf("%d\n", ft_atoi(s));
    return 0;
}
