/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 18:58:53 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:49:18 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s, const char *t, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] == t[i] && i < n - 1 && (s[i] != '\0' || t[i] != '\0'))
		i++;
	return ((unsigned char)s[i] - (unsigned char)t[i]);
}
