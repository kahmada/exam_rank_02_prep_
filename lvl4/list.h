/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:14:35 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/06 17:27:38 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H


typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
t_list	*sort_list(t_list *lst, int (*cmp)(int, int));
#endif