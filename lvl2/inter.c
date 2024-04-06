/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:30:16 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/03 10:15:22 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

//$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
//padinto$ on a pa s ecrit n a la fin parcequ il existe dejA
int	iter(char *str, char c, int len)
{
	int	i = 0;

	while (str[i] && (i < len || len == -1)) // len -1 ysa veut dire ya pas de limit de longeur
		if (str[i++] == c)
			return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))// 1condition kichof av1 wach chi 7rf m3awd fih o 2 conditiin ktchof f av1 o av2
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
//hadi !iter(argv[1], argv[1][i], i): Cela vérifie si le caractère actuel de argv[1] n'apparaît pas dans les positions précédentes de cette chaîne (c'est-à-dire si le caractère est unique jusqu'à maintenant).
//iter(argv[2], argv[1][i], -1): Cela vérifie si le caractère actuel de argv[1] apparaît dans argv[2], sans se soucier de la position (-1 indique de parcourir toute la chaîne).
