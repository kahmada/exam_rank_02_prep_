/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:10:18 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/19 21:55:24 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//grademe
#include<stdlib.h>
int val_abs(int a,int b)
{
    if(a>=b)
        return(a-b);
    else
        return(b-a);
}
int     *ft_rrange(int start, int end)
{
    int len=val_abs(end,start)+1;
    int *arr=malloc(len * sizeof(int));
    int i=0;
    while(i<len)
    {
        if(start<end)
        {
            arr[i]=end;
            end--;
            i++;
            
        }
        else
        {
            arr[i]=end;
            end++;
            i++;
      
        }
    }
    return arr;
}