/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 07:16:04 by olmohame          #+#    #+#             */
/*   Updated: 2023/12/20 13:31:51 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# ifndef MAX_FD
#  define MAX_FD 512
# endif

char	*get_next_line(int fd, int inc);
char	*clean_up(char **str, char **str2);
size_t	ft_strclen(const char *str, char cond);
void	*ft_memset(void *ptr, int c, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strndup(const char *src, size_t len);

#endif
