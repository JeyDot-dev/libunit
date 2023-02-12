/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_write_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:41 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 15:26:32 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "samples.h"
#include "libft.h"

int	write_test(void)
{
	int		clone_stdout;
	char	buf[4092];
	int		out_pipe[2];

	clone_stdout = dup(STDOUT_FILENO);
	pipe(out_pipe);
	dup2(out_pipe[1], STDOUT_FILENO);
	close(out_pipe[1]);
	ft_printf("This is a test");
	fflush(stdout);
	read(out_pipe[0], buf, 4092);
	dup2(clone_stdout, STDOUT_FILENO);
	if (ft_strncmp(buf, "This is a test", 4092) == 0)
		return (0);
	else
		return (1);
}
