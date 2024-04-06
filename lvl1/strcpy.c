/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:49:22 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/20 17:21:01 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
int main() {
    char src[] = "Hello, world!"; // Source string
    char dest[] = "jkdfjdjkkdjkjcdnkjedcnejk"; // Destination string

    ft_strcpy(dest, src); // Copy src to dest using ft_strcpy
    printf("Copied string: %s\n", dest); // Print the copied string

    return 0;
}