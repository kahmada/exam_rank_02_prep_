/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:41:12 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/01 12:47:55 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    while(begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return(count);
}