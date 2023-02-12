/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:58:24 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 11:31:20 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

static void	print_test_result(int status_code)
{
	if (status_code == 0)
		ft_printf(GREEN "[OK]\n" RESET);
	else if (status_code == 255)
		ft_printf(RED "[KO]\n" RESET);
	else if (status_code == 10)
		ft_printf(RED "[SIGBUS]\n" RESET);
	else if (status_code == 11)
		ft_printf(RED "[SIGSEGV]\n" RESET);
	else
		ft_printf("else status code %d \n", status_code);
}

int	execute_test(char *title, t_unit_test test, int *total, int *passed)
{
	int			pid;
	int			status;
	int			status_code;

	(void)total;
	(void)passed;
	pid = fork();
	if (pid == -1)
	{
		ft_printf("fork error\n");
		return (-1);
	}
	if (pid == 0)
	{
		ft_printf("[%s]:[%s]:", title, test.t_name);
		exit(test.fn());
	}
	status_code = 0;
	wait(&status);
	if (WIFEXITED(status))
		status_code = WEXITSTATUS(status);
	else if (WIFSIGNALED(status))
		status_code = WTERMSIG(status);
	print_test_result(status_code);
	return (status_code);
}
