/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:56:37 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 11:03:03 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
//TODO buffer size to remove
//# define BUFFER_SIZE 65
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
//TODO all includes below to remove

# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

char	*g_free(char *str);
char	*g_calloc(int ct);
int		g_strlen(char *str);
int		g_check_n(char *str);
char	*get_next_line(int fd);

#endif
