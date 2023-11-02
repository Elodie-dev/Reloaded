/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-cola <ede-cola@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:17:55 by ede-cola          #+#    #+#             */
/*   Updated: 2023/10/31 10:43:36 by ede-cola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
	}
	else
	{
		range = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
