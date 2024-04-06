/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:34:16 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/03 11:34:26 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int check(int c, char *str, int index)
{//is used to check if a character c already exists in the string str up to a given index. 
//It returns 0 if the character is found (indicating a duplicate), and 1 otherwise.
	int i = 0;
	
	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return  1;
}

int main(int argc, char **argv)
{	
	int i = 0;
	int j = 0;
	int k = 0;
	
	if (argc == 3)
	{
		while(argv[1][i] != '\0')
		{
			i++;
		}
		while(argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];// concatenation
			i++;
			j++;
		}
		i--;// retourn en arriere
		while(k <= i)
		{
			if(check(argv[1][k], argv[1], k) == 1) // check for dyplicate using check function
				write (1, &argv[1][k], 1); 
			k++;
		}
	}
	write (1, "\n", 1);
} 