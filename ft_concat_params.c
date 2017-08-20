/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboit <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:40:57 by lboit             #+#    #+#             */
/*   Updated: 2017/08/21 01:29:38 by lboit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char	*ft_concat_params(int argc, char **argv)
{
	int nbac;
	int letters;
	char *str;
	
	nbac = 1; 
	letters = 0;
	while (nbac < argc) 
	{
		letters = letters + ft_strlen(argv[nbac]) + 1;
		nbac++;
	}
	str = (char*)malloc(sizeof(char) * (letters));

	int	i;
	int j;

	i = 0;
	j = 0;
	nbac = 1;
	while (nbac < argc)
	{
		while (argv[nbac][i] != '\0')
		{
			str[j] = argv[nbac][i];
			i++;
			j++;
		}
		i = 0;
		str[j++] = '\n';
		nbac++;
	}
	str[--j] = '\0';
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s\n", ft_concat_params(argc, argv));
	return (0);
}
