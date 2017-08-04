/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lararamirez <lararamirez@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 10:44:19 by lararamirez       #+#    #+#             */
/*   Updated: 2017/08/04 10:44:22 by lararamirez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_H
# define libft_H

# include <string.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/*
** ---LIST MANIPULATION---
*/
typedef	struct		s_arg
{
	char			*format_code;
	char			*flags;
	char			*width;
	char			*prec;
	char			*mod;
	char			*conv;
	char			*type;
	char			*opt_type_1;
	char			*opt_type_2;
	int				opt_1;
	int				opt_2;
	char			*print;
	struct s_arg	*next;
}					t_arg;

void				ft_lstdel(t_arg **format_list);

/*
** ---MEMORY MANIPULATION---
*/
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memset(void *b, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** ---STRING MANIPULATION---
*/
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
size_t				ft_countwords(char const *str, char c);
size_t				ft_strlen(const char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t n);
char				*ft_append_before(char *s1, char *s2);
char				*ft_append_after(char *s1, char *s2);
char				*ft_insert_in_str(char *s1, char *s2, size_t pos);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strjoinfree(char *s1, char *s2);
char				*ft_strtrim(char const *s);
char				*ft_strdup(const char *s1);
char				*ft_strdupfree(char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, size_t n);
char				**ft_strsplit(char const *s, char c);
int					ft_putstr_count(char *str);
int					ft_put_partial_str_count(char *start, char *end);
char				*ft_hex_prefix(char upper);
char				*ft_oct_prefix(void);
int					ft_match(const char *check, char *against);
char				*ft_create_padding(char c, int size);

/*
** ---CHARACTER MANIPULATION---
*/
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);

/*
** ---NUMBER MANIPULATION---
*/
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
size_t				ft_intlen(unsigned int n);
size_t				ft_longlen(unsigned long n);
size_t				ft_longlonglen(unsigned long long n);
size_t				ft_intmaxlen(uintmax_t n);
unsigned int		ft_abs(int n);
unsigned long		ft_abs_long(long n);
unsigned long long	ft_abs_longlong(long long n);
uintmax_t			ft_abs_intmax(long n);
char				*ft_itoa(int n);
char				*ft_uitoa(unsigned int n);
char				*ft_ltoa(long n);
char				*ft_lltoa(long long n);
char				*ft_ulltoa(unsigned long long n);
char				*ft_ultoa(unsigned long n);
char				*ft_imtoa(intmax_t n);
char				*ft_uimtoa(uintmax_t n);
char				*ft_lltoa_base(long long n, int base, short upper);
char				*ft_dtoa(double nbr, size_t afterpoint);
double				ft_pow(double base, double exponent);
float				ft_fmod(float x, float y);

/*
** ---TABLE MANIPULATION---
*/
char				**ft_strtabnew(size_t size);

#endif
