/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:26:48 by tashiget          #+#    #+#             */
/*   Updated: 2024/02/25 19:07:24 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 128
# define DICT "numbers.dict"
# include <errno.h>
# include <fcntl.h>
# include <libgen.h>
# include <stdlib.h>
# include <string.h>
# include <libgen.h>
# include <unistd.h>
# include <stdio.h>

char				*ft_strjoin(char **strs);
char				**ft_split(char *str, char *charset);
char				**ft_make_dictstr(char *dict);
int					ft_strlen(char *str);
void				no_argument(char *str);
void				one_argument(char *num, char *str);
void				two_argument(char *num, char *dict, char *str);
unsigned long long	ft_atoi(char *str);
char				*ft_putanswer(unsigned long long num, \
char **box, int n, char *str);
void				ft_putstr(char *str);
char				*ft_searchdict(unsigned long long n, char **box);
int					check_dict(char **dict_box);
int					ft_checknumber(char *str);
char				**ft_make_dictbox(char *dict);
char				*ft_strcat(char *dest, char *src);
void				ft_owari(char *ans);
char				*ft_catstr2(char *str, char *srcs);
char				*ft_spacedel(char *str);
char				*ft_catstr(char *str, char *srcs);
int					ft_thpow(int n);
int					checkend(char *str);
int					ft_strcmp(char *s1, char *s2);
void				ft_free(char *ans, char **box);
int					is_dict_printable(char **box);
char				*ft_putanswerpr(unsigned long long num, \
char **box, int n, char *str);

#endif
