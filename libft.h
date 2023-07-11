/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meakar <meakar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:09:46 by 42istanbu         #+#    #+#             */
/*   Updated: 2023/07/07 15:17:33 by meakar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void    ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t num);
void    bzero(void  *s, size_t num);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t num);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t  strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strdup(const char *s1);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);

#endif