/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:28:36 by kahmada           #+#    #+#             */
/*   Updated: 2024/02/28 16:34:31 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> // Pour write

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

int main()
{
    unsigned char a = 230; // Utilisez unsigned char pour garantir que l'octet est bien représenté sur 8 bits
    print_bits(a); // Appel de la fonction print_bits pour afficher les bits de a
    printf("\n"); // Ajout d'un saut de ligne pour la lisibilité
    return 0;
}
