/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:31:14 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:47:39 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	print_forty_two(void)
{
	int		clone_stdout;
	char	buf[4092];
	int		out_pipe[2];

	clone_stdout = dup(STDOUT_FILENO);
	pipe(out_pipe);
	dup2(out_pipe[1], STDOUT_FILENO);
	close(out_pipe[1]);
	ft_printf("forty two");
	write(1, "\0", 1);
	fflush(stdout);
	read(out_pipe[0], buf, 4092);
	dup2(clone_stdout, STDOUT_FILENO);
	if (ft_strncmp(buf, "forty two", 4092) == 0)
		return (0);
	else
		return (1);
}
