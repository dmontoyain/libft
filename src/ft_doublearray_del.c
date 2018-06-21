/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublearray_del.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 19:18:41 by dmontoya          #+#    #+#             */
/*   Updated: 2018/01/22 19:40:11 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	doublearray_del(char **str)
{
	int x;

	x = -1;
	while (str[++x] != 0)
		ft_strdel(&str[x]);
	free(str);
}