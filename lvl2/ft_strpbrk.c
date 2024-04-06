/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:05:46 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/15 05:51:49 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	while(*s1)
	{
		i = 0;
	   	while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;	
	}
	return (0);
}
//it s the same aS FT_strcspn la diference c est que FT_strcspn return lentgh et cette fonction return char
int main()
{
    char s[] = "khadoja";
    char re[] = "habcd efj";// une fois ktlga hrf kayn f re p kayn f s ktreturnih mn s talkhr dya so makigmch lakhr dyal re
    printf("%s", ft_strpbrk(s, re));
}