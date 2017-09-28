/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 20:21:37 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/23 18:44:28 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;
	int len;

	len = ft_strlen((char *)str);
	i = len;
	while (len--)
	{
		if (str[i] == '\0' && c == '\0')
			return ((char *)&str[i]);
		if (c == str[i])
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
