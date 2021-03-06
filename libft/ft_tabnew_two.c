/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tabnew_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:34:33 by yoelguer          #+#    #+#             */
/*   Updated: 2019/04/20 02:54:50 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	**ft_tabnew_two(size_t x, size_t y)
{
	size_t	i;
	int		**tab;

	i = 0;
	tab = (int **)malloc(sizeof(tab) * y);
	if (!tab)
		return (NULL);
	while (i < y)
	{
		tab[i] = (int *)malloc(sizeof(int) * x);
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}
