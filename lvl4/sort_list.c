/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:46:31 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/07 17:13:07 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)// =0 sa veut dire is notsorted 
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;// pace que j ai deja stoker tout la list  dans temp et j ai met tmp come head
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
