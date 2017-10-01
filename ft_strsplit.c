/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:48:31 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/30 23:11:08 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(const char *s, char c)
{
	size_t		wc;
	size_t		i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			wc++;
			i++;
		}
		else if (s[i] != c && s[i - 1] != c)
			i++;
	}
	return (wc);
}

int			ft_mallocarray(char **as, char const *s, char c)
{
	size_t		i;
	size_t		temp;
	size_t		len;

	temp = 0;
	len = 0;
	while (s[len] != '\0')
	{
		i = len;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				as[temp] = (char *)malloc(sizeof(char) * (i - len + 1));
				if (as[temp++] == 0)
					return (0);
				len = i - 1;
			}
		}
		len++;
	}
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**sa;
	size_t		wc;
	size_t		j;
	size_t		i;

	i = 0;
	wc = ft_wordcount(s, c);
	sa = (char **)malloc(sizeof(char *) * (wc + 1));
	if (sa == 0)
		return (0);
	sa[wc] = 0;
	ft_mallocarray(sa, s, c);
	wc = 0;
	while (s[wc] != '\0')
	{
		j = 0;
		while (s[wc] != c && wc < ft_strlen(s))
		{
			sa[i][j++] = s[wc++];
			if (s[wc] == c || s[wc] == '\0')
				sa[i++][j] = '\0';
		}
		wc++;
	}
	return (sa);
}
