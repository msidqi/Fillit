/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetr_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:43 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:44 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid_tetr_two(char *t, int i, int id, int s)
{
	if (id == 7 && i % s != s - 1 && i + 2 * s + 1 < s * s && t[i] == '.'
	&& t[i + s] == '.' && t[i + s + 1] == '.' && t[i + 2 * s + 1] == '.')
		return (1);
	if (id == 8 && i % s != 0 && i % s != s - 1 && i + s + 1 < s * s
		&& t[i] == '.' && t[i + s - 1] == '.' && t[i + s] == '.' &&
		t[i + s + 1] == '.')
		return (1);
	if (id == 9 && i % s != s - 1 && i + 2 * s < s * s && t[i] == '.'
		&& t[i + s] == '.' && t[i + s + 1] == '.' && t[i + 2 * s] == '.')
		return (1);
	if (id == 10 && i % s + 2 < s && i + s + 1 < s * s && t[i] == '.'
		&& t[i + 1] == '.' && t[i + 2] == '.' && t[i + s + 1] == '.')
		return (1);
	if (id == 11 && i % s != 0 && i + 2 * s < s * s && t[i] == '.'
		&& t[i + s - 1] == '.' && t[i + s] == '.' && t[i + 2 * s] == '.')
		return (1);
	if (id == 12 && i % s != s - 1 && i + 2 * s + 1 < s * s && t[i] == '.'
		&& t[i + 1] == '.' && t[i + s + 1] == '.' && t[i + 2 * s + 1] == '.')
		return (1);
	if (id == 13 && i % s + 2 < s && i + s < s * s && t[i] == '.'
		&& t[i + 1] == '.' && t[i + 2] == '.' && t[i + s] == '.')
		return (1);
	return (0);
}
