/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:46:04 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/10 18:11:01 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int isvalid(int ch, int baselen)
{
    char *lcbase = "0123456789abcdef";
    char *ucbase = "0123456789ABCDEF";
    int i = 0;
    while (i < baselen)
    {
        if (ch == lcbase[i] || ch == ucbase[i])
            return (1);
        i++;
    }
    return (0);
}
int ft_atoi_base(const char *str, int str_base)
{
    int res = 0, sign = 1, i = 0;
    while (str[i]==32 || (str[i]<=13 && str[i]>=9))
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    } // hadi partie dyal atoi
    while (str[i] && isvalid(str[i], str_base))
    {
        res =res * str_base;
        if (str[i] >= '0' && str[i] <= '9')
            res = res + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            res = res + str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            res = res + str[i] - 'A' + 10;
        i++;
    }
    return (res * sign);
}


int main()
{
    printf("%d", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base." "16", 16));
}