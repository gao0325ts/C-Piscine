/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakada <stakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:49:47 by motsubo           #+#    #+#             */
/*   Updated: 2024/02/28 23:31:04 by stakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
// #include <libc.h>

# define BUF_SIZE 512

typedef struct s_data
{
	int		rows;
	char	empty_char;
	char	obstacle_char;
	char	full_char;
	char	**point;
}			t_map;

typedef struct s_result
{
	int		max;
	int		row;
	int		col;
}			t_result;

// stdin.c
void		read_stdin(void);
char		*read_input(char *buf, int *buf_size, int *total_size,
				int bytes_read);
void		free_buffer(char *buf);
void		copy_data(char *source, char *destination, int size);
char		*create_buffer(int size);

// process_map.c
int			get_map_rows(char *str, int len);
int			is_designated_char(char **point, t_map arg);
int			is_validate_map(t_map arg, char **row);

// ft_display_file.c
void		cut_in_rows(char *str);
void		read_size_of_file(char *argv_1);
void		ft_display_file(char *argv_1, int buf_size);
int			double_free(char **double_p, int i);
void		set_map(char **row, int len, int i);

// find_answer.c
void		initialize_map(int **caculation, t_map arg, char **row);
void		set_obstacle(int **caculation, t_map arg, char **row);
void		fill_edges_with_ones(int **caculation, t_map arg, char **row);
int			find_min(int left_top, int top, int left);
t_result	find_answer(int **caculation, t_map arg, t_result first_answer,
				char **row);

// solve.c
void		replace_with_full_char(t_map arg, t_result first_answer);
void		solve(t_map arg, char **row);

// put_answer.c
void		put_answer(t_map output);

// put_error.c
int			print_error(void);

// process_string.c
void		ft_putstr(char *str);
int			arrlen(char **str);
int			ft_strlen(char *str);
void		rev_str(char *str, int size);
int			ft_str_is_printable(char *str);

// ft_atoi.c
int			ft_isspace(int c);
int			ft_atoi(char *str);

// ft_split.c
int			is_in_charset(char c, char *charset);
int			word_length(char *str, char *charset);
int			count_words(char *str, char *charset);
char		**ft_split(char *str, char *charset);

// ft_strdup.c
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *src);

// void		solve(t_map arg);

#endif
