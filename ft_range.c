/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboit <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 12:18:22 by lboit             #+#    #+#             */
/*   Updated: 2017/08/20 23:31:05 by lboit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int minsave;
	int *values;

	i = 0;
	minsave = min;
	values = (int*)malloc(sizeof(int) * (max - minsave));
	if (values == NULL)
		return (NULL);
	if (min >= max)
	   return (0);
	while (i < max - minsave)
	{
		values[i] = min;
		i++;	
		min++;
	}
	return (values);
}

int		main(void)
{	
	int i;
	int	*tab;

	i = 0;
	tab = ft_range(5,  10);
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
