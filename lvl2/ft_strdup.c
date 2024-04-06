/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:44:19 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/22 14:59:29 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>
int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return(i);
}
char    *ft_strdup(char *src)
{
    int i=0;
    char *cpy;
    if(!src)
        return NULL;
    cpy = malloc(ft_strlen(src)+1);
    while(src[i])
    {
        cpy[i]=src[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}
int main()
{
    char *s = "khadija";
    printf("%s", ft_strdup(s));
}