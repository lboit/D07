/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboit <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:06:26 by lboit             #+#    #+#             */
/*   Updated: 2017/08/22 02:12:03 by lboit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_len_word(char *str)
{
	static int i = 0;
	int lt_count;

	lt_count = 0;
	while (str[i] != '\0')
	{
		if (((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		&& (str[i + 1] > 32 && str[i + 1] < 127 )) || (i == 0 && str[i] > 32 &&
		str[i] < 127))
		{
			if (i == 0)
				lt_count++;
			i++;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' 
					&& str[i] != '\0')
			{
				lt_count++;
				i++;
			}
			return (lt_count);
		}
		i++;
	}
	return (0);
}	


int		ft_count_word(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while ((str[i]) != '\0')
	{
		if (((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		&& (str[i + 1] > 32 && str[i + 1] < 127 )) || (i == 0 && str[i] > 32 && 
		str[i] < 127))
			word++;
		i++;
	}
	i++;
	return (word);
}
	

char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int lt;
	int block;
	int level;
	
	lt = 1;
	block = 0;
	level = 0;

	tab = (char **)malloc(sizeof(char*) * (ft_count_word(str)));
	while (level < ft_count_word(str))
	{
		tab[level] = (char *)malloc(sizeof(char) * (ft_len_word(str)) + 1);
		level++;
	}
	level = 0;
	while (str[lt - 1] != '\0')
	{
		if (str[lt - 1] == ' ' || str[lt - 1] == '\n' || str[lt - 1] == '\t'
			|| lt == 1)
		{
			if (lt == 1)
				lt--;
			while (str[lt] !=  ' ' && str[lt] != '\n' && str[lt] != '\t'
					&& str[lt] != '\0')
			{
				tab[level][block] = str[lt]; 
				lt++;
				block++;
			}
			tab[level][block] = '\0';
		}
		level++;
		lt++;
		block = 0;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	char **tab;
	int i = 0;

	tab = ft_split_whitespaces(argv[1]);
	while (i < atoi(argv[2]))
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
