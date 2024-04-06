/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:08:35 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/19 18:18:41 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	int start;
	int end;
	int i = 0;
		
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;// parcorir toute la chaine 
		while(i >= 0)
		{
			while( argv[1][i] == '\0' || argv[1][i] == ' ' || argv[1][i] == '\t')// hna nhal ila lga '\0', o gbl mnha lga space ola tab alors khs irja3 pour troubver la finde dernier mot
				i--;// i qu on a arrive est \0' ou space ou tab on revien pour trouver dernier mot
			end = i;// la fin de dernier mot est stocker dans ce variable
			while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;//pour se deplacer dans debut de dernier mot 
			int  flag;
			flag = start;// on a stocker start in flag pour utiliser cet index apres
			while(start <= end)// ici on print le mot
			{
				write (1, &argv[1][start],1);
				start++;	
			}
			if (flag !=0)// sa veut dire on a pas encore arriver au fist index (i=0)
			{
				write(1, " ", 1);// on ecrit l espace pour aller au prochain mot qu on va ecrir apres
			}
		}
	}
	write(1, "\n", 1);
}