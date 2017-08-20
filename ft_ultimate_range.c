/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboit <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 15:05:57 by lboit             #+#    #+#             */
/*   Updated: 2017/08/20 23:29:07 by lboit            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int minsave;

	i = 0;
	minsave = min;
	*range = (int *)malloc(sizeof(int) * (max - minsave));
	if (*range == NULL)
		return (0);
	if (min >= max)
		return (0);
	while (i < max - minsave)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (max - minsave);
}

int		main(void)
{
	int 	*tab;

	printf("%d\n", ft_ultimate_range(&tab, 0, 5));
	return(0);
}
