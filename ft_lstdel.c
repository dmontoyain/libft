/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 21:43:15 by dmontoya          #+#    #+#             */
/*   Updated: 2017/09/28 21:43:18 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    if (alst)
    {
        while (alst)
        {
            del((*alst)->content, (*alst)->content_size);
            free (*alst);
            *alst++ = 0;
        }
    }
}