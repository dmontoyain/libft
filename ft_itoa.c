/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 21:00:42 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 11:13:10 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int nb)
{
	int		size;

	size = 0;
	if (nb < 0)
	{
		size++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		size++;
	}
	return (size + 1);
}

int		ft_isnegative(int nb, char *ns)
{
	if (nb < 0)
	{
		ns[0] = '-';
		nb = -nb;
	}
	return (nb);
}

char	*ft_itoa(int nb)
{
	int		size;
	char	*ns;

	size = ft_intlen(nb);
	ns = (char *)malloc(sizeof(char) * (size + 1));
	if (ns == NULL)
		return (0);
	if (nb <= -2147483648)
	{
		ns = ft_strcpy(ns, "-2147483648");
		return (ns);
	}
	if (nb < 0)
		nb = ft_isnegative(nb, ns);
	ns[size + 1] = '\0';
	while (size--)
	{
		if (ns[size] == '-')
			break ;
		ns[size] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (ns);
}
