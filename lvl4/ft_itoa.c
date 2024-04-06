/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:24:24 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/11 19:09:54 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int count_num(int n)
{
    int count=0;
    if(n <0)
    {
        count++;
        n = -n;      
    }
    else if(n ==0)
        count++;
    while(n > 0)
    {
        
        n/=10;
        count++;
    }
    return(count);
}
char	*ft_itoa(int nbr)
{
    char *result;
    int len = count_num(nbr);
    int i =0;
    result=malloc(len+1);
    if (!result)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	i = len - 1;
	if (nbr == 0)
		result[i] = '0';
	while (nbr != 0)
	{
		result[i--] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	result[len] = '\0';
	return (result);
}