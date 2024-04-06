/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:23:33 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/21 20:28:37 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}	
int main()
{
    char *s1 = "khadi";
    char *s2 = "khadija";
    printf("%d", ft_strcmp(s1, s2)); 
}