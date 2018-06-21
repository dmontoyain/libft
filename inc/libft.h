/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 19:50:01 by dmontoya          #+#    #+#             */
/*   Updated: 2018/03/04 01:22:07 by dmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include "get_next_line.h"
# define BUFFSIZE 4096

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char    			*memjoin(char *s1, char *s2, uint64_t size1, uint64_t size2);
size_t  			read_file_mem(char *filename, char **store);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
u_int64_t			ft_atoi_base(char *str, u_int64_t base);
void				str_touppercase(char *str);
unsigned long long	strtohex(char *str);
int					ft_atoi(const char *str);
int					ft_wcharlen(wchar_t c);
size_t				ft_wcstrlen(wchar_t *wstr);
char				*itoa_base(intmax_t nbr, unsigned int base);
char				*uitoa_base(uintmax_t nbr, unsigned int base);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *b, const char *l, size_t len);
char				*ft_strdup(const char *str);
void				*ft_memset(void *b, unsigned int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t len);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
char				*ft_strnew(size_t size);
void				ft_strclr(char *str);
void				ft_putchar(char x);
void				ft_putstr(const char *str);
void				ft_striter(char *str, void (*f)(char *));
void				ft_striteri(char *str, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *str, char (*f)(char));
char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				ft_putnbr(int nb);
void				ft_putendl(char const *s);
char				*ft_itoa(int nb);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_strdel(char **as);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *str, int fd);
void				ft_putendl_fd(char const *str, int fd);
void				ft_putnbr_fd(int nb, int fd);
char				**ft_strsplit(char const *s, char c);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t len);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_intlen(int nb);
char				*remove_nonascii(char *s, int n);
char				*ft_strnjoin(char *s1, char *s2, size_t l1, size_t l2);
void				doublearray_del(char **str);
size_t				ft_wordcount(const char *s, char c);

#endif
