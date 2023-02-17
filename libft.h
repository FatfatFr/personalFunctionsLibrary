/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatdiall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:31:02 by fatdiall          #+#    #+#             */
/*   Updated: 2023/02/01 16:32:50 by fatdiall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int             atoi(const char *nptr);
int             strncmp(const char *s1, const char *s2, size_t n);
int             memcmp(const void *s1, const void *s2, size_t n);
int             toupper(int c);
int             tolower(int c);
size_t	strlen(const char *s);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *big, const char *little, size_t len);
void	bzero(void *s, size_t n);
void	*memset(void *s, int c, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
void	*calloc(size_t nmemb, size_t size);
char	*strdup(const char *s);

#endif
