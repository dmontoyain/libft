/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 15:48:31 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 11:10:12 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_wordcount(const char *s, char c)
{
	int wc;
	int i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			wc++;
			i++;
		}
		else if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] != c))
			i++;
	}
	return (wc);
}

int		ft_mallocarray(char **as, char const *s, char c)
{
	int i;
	int temp;
	int len;

	temp = 0;
	len = 0;
	while (s[len] != '\0')
	{
		i = len;
		while (s[i] != c)
		{
			i++;
			if (s[i] == c || (s[i] != '\0' && s[i - 1] != c))
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

char	**ft_strsplit(char const *s, char c)
{
	char	**sa;
	int		wc;
	int		j;
	int		i;

	i = 0;
	wc = ft_wordcount(s, c);
	sa = (char **)malloc(sizeof(char *) * (wc + 1));
	if (sa == 0)
		return (0);
	sa[wc] = 0;
	ft_mallocarray(sa, s, c);
	printf("%s\n", "here");
	while (*s)
	{
		j = 0;
		while (*s != c)
		{
			sa[i][j++] = *s++;
			if (*s == c || *s == '\0')
				sa[i++][j] = '\0';
			if (*s == '\0')
				break ;
		}
		s++;
	}
	printf("%s\n", sa[2]);
	return (sa);
}

int main()
{
	ft_strsplit("  olo ", 'o');
	return (0);
}