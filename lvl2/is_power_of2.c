/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:45:07 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/27 14:53:01 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    
    while (n % 2 == 0)
        n /= 2;
    
    return (n==1);
}
int main()
{
    int x = 9;
    printf("%d", is_power_of_2(x));
}