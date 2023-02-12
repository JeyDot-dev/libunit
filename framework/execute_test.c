/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:58:24 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 14:46:40 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <signal.h>
#include "stdlib.h"

static int	print_test_result(void)
{
	int			status;
	int			status_code;

	status_code = 0;
	wait(&status);
	if (WIFEXITED(status))
		status_code = WEXITSTATUS(status);
	else if (WIFSIGNALED(status))
		status_code = WTERMSIG(status);
	if (status_code == 0)
		ft_printf(GREEN "[OK]\n" RESET);
	else if (status_code == 255)
		ft_printf(RED "[KO]\n" RESET);
	else if (status_code == SIGBUS)
		ft_printf(YELLOW "[SIGBUS]\n" RESET);
	else if (status_code == SIGSEGV)
		ft_printf(YELLOW "[SIGSEGV]\n" RESET);
	else if (status_code == SIGUSR1)
		ft_printf(MAGENTA "[TIMEOUT]\n" RESET);
	else
		ft_printf("else status code %d \n", status_code);
	return (status_code);
}

void	alarmhandler(int sig)
{
	int	pid;

	(void)sig;
	pid = getpid();
	kill(pid, SIGUSR1);
}

void	childkillprocss(int sig)
{
	exit (sig);
}

int	execute_test(char *title, t_unit_test test, int *total, int *passed)
{
	int			pid;
	int			status_code;

	signal(SIGALRM, alarmhandler);
	*total += 1;
	pid = fork();
	if (pid == -1)
	{
		ft_printf("fork error\n");
		return (-1);
	}
	if (pid == 0)
	{
		alarm(5);
		signal(SIGUSR1, childkillprocss);
		ft_printf("[%s]:[%s]:", title, test.t_name);
		exit(test.fn());
	}
	status_code = print_test_result();
	if (status_code == 0)
		*passed += 1;
	return (status_code);
}
