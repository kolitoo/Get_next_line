/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourdon <abourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:51:01 by abourdon          #+#    #+#             */
/*   Updated: 2022/12/05 13:30:09 by abourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_strlen(const char *str);
int		free_line(char *line);
char	*get_next_line(int fd);
char	*join(char *s1, char *s2);
char	*substr(char *s, unsigned int start, size_t len);
void	*ft_calloc(size_t elemCount, size_t elementSize);

#endif