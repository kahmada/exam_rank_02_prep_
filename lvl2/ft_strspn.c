/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:12:48 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/17 20:22:07 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// size_t	ft_strspn(const char *s, const char *accept)
// {
    
// }
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)// f 7alat mat79a9ch strchr 3ad knhbso
			break;
		i++;
	}
	return (i);
}

int main() {
    const char *s = "Hello World";/*kanqlbo ela chars dial s f wst mn accept , 
    //ila lqina shy char kayn f s o makaynsh f accept kayreturni length dial  char fin wsl f s */
    const char *accept = "Heldorw ";

    size_t length = ft_strspn(s, accept);
    printf("Length of initial segment of 's' containing only characters from 'accept': %zu\n", length);

    return 0;
}


