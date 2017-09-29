/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:46:37 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 10:55:30 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t temp;

	temp = 0;
	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (len--)
	{
		temp = i;
		if (little[j++] == big[i++])
		{
			if (little[j] == '\0')
				return ((char *)&big[i - j]);
		}
		else
		{
			i = temp + 1;
			j = 0;
		}
	}
	return (0);
}
