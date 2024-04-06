/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:14:42 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/01 17:47:20 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}
int main()
{
    int a = 3;
    int b = 4;
    printf("%d", lcm(a, b));
}