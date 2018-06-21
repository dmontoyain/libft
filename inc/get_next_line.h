/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:02:49 by dmontoya          #+#    #+#             */
/*   Updated: 2017/11/08 11:47:06 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"

int		get_next_line(const int fd, char **line);

#endif
