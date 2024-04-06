/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:17:21 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/06 17:33:45 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *p;
	p = begin_list;
	while(p)
	{
		(*f)(p->data);
		p= p->next;
	}
}