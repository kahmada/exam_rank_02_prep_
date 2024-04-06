/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:10:15 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/11 15:51:36 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//grademe
#include <stddef.h>
size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t     i = 0;
    int     j = 0;

    while (s[i] != '\0')
    {
		j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
int main()
{
    const char *s = "abc12345";
    const char *reject = "b";
    size_t len = ft_strcspn(s, reject);
    
    printf("Longueur du segment initial sans aucun caractère de 'reject' : %zu\n", len);
    
    return 0;
}