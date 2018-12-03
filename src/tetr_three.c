/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:12 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:13 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetr_three(int *tab)
{
	if (tab[0] == 3 && tab[1] == 1 && tab[2] == 3)
		return (5);
	if (tab[0] == 3 && tab[1] == 1 && tab[2] == 4)
		return (11);
	if (tab[0] == 4 && tab[1] == 3 && tab[2] == 1)
		return (18);
	return (0);
}
