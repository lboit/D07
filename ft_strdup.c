/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboit <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 10:46:50 by lboit             #+#    #+#             */
/*   Updated: 2017/08/20 12:02:10 by lboit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{

	int i;
	char *dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(*src) * (i + 1));
	i = 0;
	if (src == 0)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			(dest[i] = src[i]);
			i++;
		}
		dest[i] ='\0';
		return (dest);

	}
}


int		main(void)
{
	char	src[] ="yol 356*/s;o";
	//printf("%s\n", src);
	//printf("%s", ft_strdup(src));
	printf("%s", strdup(src));
	return (0);
}



