/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 17:13:59 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/02 17:32:40 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int result = 0;
    int signe = 1;
    int i = 0;
    while(str[i]==' ' || (str[i] >= 9 && str[i]<= 13))
        i++;
    if(str[i]=='-')
    {
        signe=-1;
        i++;
    }
    else if(str[i]=='+')
        i++;
    while(str[i])
    {
        result=result*10 +(str[i] - 48);
        i++;
    }
    return(result*signe);
}

void	print_hex(int n)
{
	char hex_digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}