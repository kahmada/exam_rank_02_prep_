/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 19:09:06 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/17 21:12:49 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	rot13(char *str)
{
	int	i;
	i = 0;
	while( str[i] != '\0')
	{
		if( (str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm') )
			str[i] += 13;
		else if( (str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z') )
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}