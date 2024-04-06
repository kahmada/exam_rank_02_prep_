/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:28:49 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/10 14:43:52 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;// Compare la donnée du nœud courant avec la référence donnée
	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;// Met à jour le début de la liste pour pointer vers le nœud suivant
		free(cur);// Libère la mémoire occupée par le nœud courant
		ft_list_remove_if(begin_list, data_ref, cmp);// Appelle récursivement la fonction avec le nouveau début de la liste
	}
	else // Si la comparaison est différente de zéro
	{
		cur = *begin_list;// Réinitialise cur pour pointer vers le début de la liste
		ft_list_remove_if(&cur->next, data_ref, cmp);// Appelle récursivement la fonction avec le début de la liste à partir du prochain nœud
	}
}
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return ;
    t_list *cur = *begin_list;// on cre head o kn3tiwh list
    if(cmp(cur->data, data_ref)==0)// kn9arno o ila kan kitsawa m3a dk dataref kinfriw
    {
        *begin_list=cur->next;// hna list l head dyalha kiwli howa cur->next 7it sf bghina nmsho dk cur li lginah kitsawa m3a data ref
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);// kn3awdo nfs blan
    }
    else// ila kano makitsawawch
    {
        cur = *begin_list;// kib9a cur howa l head 
        ft_list_remove_if(&cur->next, data_ref, cmp);// o kn3awdo nfs blan knswiviw l mo9arana tant que next mach nul
    }
}
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return ;
    t_list *cur = *begin_list;
    if(cmp(cur->data, data_ref)==0)// ici on doit retirer
    {
        *begin_list=cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else{
        *begin_list= cur;
        ft_list_remove_if(&cur->next, data_ref, cmp);
    }
}