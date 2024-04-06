/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:03:37 by kahmada           #+#    #+#             */
/*   Updated: 2024/03/10 19:39:46 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	check_separator(char c)
{
	if ( c == 10 || c == 9 || c == 32)
		return (1);
	if (c == 0)// backslash zero
		return (1);
	return (0);
}
int	count_strings(char *str)
{
	int	i = 0;
	int	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i]))// ici check is 1 ; on a arriver au espace ou .
		//cette boucle continue de parcourir la chaîne tant que nous n'avons pas atteint la fin de la 
		//chaîne et que le caractère actuel est un séparateur.(s il ya becoup des separateurs)
			i++;
		if (str[i] != '\0')// quando on trouve la fin du mot o increment 
			count++;
		while (str[i] != '\0' && !check_separator(str[i]))// ici check is 0 alors ya pas de separator
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str)// calcul longeur d un mot 
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i]))// chek is 0
		i++;
	return (i);
}

char	*fill_word(char *str)// copie chaque word
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char	**ft_split(char *str)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str))
			str++;
		if (*str != '\0')
		{
			strings[i] = fill_word(str);
			i++;
		}
		while (*str && !check_separator(*str))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
//grademe 
int check_sep(char c)
{
    if(c == 32 || (c >= 9 && c <=13 ))
        return(1);
    if(c == '\0')
        return(1);
    return(0);
}
int count_w(char *s)
{
    int i = 0;
    int count;
    while(s[i])
    {
        while(s[i] && check_sep(s[i]))
            i++;
        if(s[i] != '\0')
            count++;
        while(s[i] && !check_sep(s[i]))
            i++;
    }
    return (count);   
}
int strlen_sep(char *str)
{
    int i;
    while(str[i] && !check_sep(str[i]))
        i++;
    return(i);
}
char *fill_word(char *s)
{
    int i = 0;
    int len = strlen_sep(s);
    char *word;
    word=malloc(len +1);
    while(s[i] && !check_sep(s[i]))// hna imkn i<lenword
    {
        word[i]=s[i];
        i++;
    }
    word[i]='\0';
    return(word);
}
char    **ft_split(char *str)
{
    char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_w(str) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str))
			str++;
		if (*str != '\0')
		{
			strings[i] = fill_word(str);
			i++;
		}
		while (*str && !check_sep(*str))
			str++;
	}
	strings[i] = 0;
	return (strings);
}