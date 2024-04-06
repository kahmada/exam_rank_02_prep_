/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:10:43 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/18 06:54:45 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		max(int* tab, unsigned int len)
{
    if (len == 0)
		return (0);
	
	unsigned int result;
	unsigned int i = 0;
	
	result = tab[0];
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return result;
}
int main()
{
    int tab[] = {2, 51, 7, 42};
    printf("%d", max(tab, 4));
}