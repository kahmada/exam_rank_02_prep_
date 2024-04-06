/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:48:38 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/19 21:55:16 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int ca_absl(int a)
{
    if(a >=0)
        return(a);
    else
        return(-a);
}
int     *ft_range(int start, int end)
{
    int i = 0;
    int len = ca_absl(start - end)+1;
    int *res = (int *)malloc((len)*sizeof(int));
    while(i < len)
    {
        if(start < end)
        {
            res[i]=start;
            start++;
            i++;
        }
        else
        {
            res[i]=start;
            start--;
            i++;
        }
    }
    return(res);
}