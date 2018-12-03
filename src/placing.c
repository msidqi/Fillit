/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:17:15 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 16:37:00 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	placing(char **out, int **tab)
{
	while ((*tab)[54] < (*tab)[52] && (*tab)[54] > -1)
	{
		while ((*tab)[53] < (*tab)[55] * (*tab)[55])
		{
			if (valid_tetr(*out, (*tab)[53], (*tab)[(*tab)[54]], (*tab)[55]))
			{
				(*tab)[(*tab)[54] + 26] = (*tab)[53];
				put(out, (*tab)[(*tab)[54]], 'A' + (*tab)[54], (*tab)[53]);
				(*tab)[53] = 0;
				(*tab)[54]++;
				break ;
			}
			(*tab)[53]++;
		}
		if ((*tab)[53] == (*tab)[55] * (*tab)[55])
		{
			if ((*tab)[54] == 0)
				break ;
			(*tab)[54]--;
			unput((*tab)[(*tab)[54]], out, (*tab)[(*tab)[54] + 26]);
			(*tab)[53] = (*tab)[(*tab)[54] + 26] + 1;
		}
	}
}
