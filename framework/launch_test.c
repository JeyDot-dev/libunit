/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:39:30 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 18:58:29 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

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
	{
		status_code = WEXITSTATUS(status);
	}
	else if (WIFSIGNALED(status))
		status_code = WTERMSIG(status);
	else
		status_code = 0;
	if (status_code == 0)
		ft_printf("[OK]\n");
	else if (status_code == 255)
		ft_printf("[KO]\n");
	else if (status_code == 10)
		ft_printf("[SIGBUS]\n");
	else if (status_code == 11)
		ft_printf("[SIGSEGV]\n");
	else
		ft_printf("else status code %d \n", status_code);
	return (status_code);
}

int	launch_test(char *title, t_unit_test *head)
{
	int			total_tests;
	int			passed_tests;
	t_unit_test	*current;

	total_tests = 0;
	passed_tests = 0;
	current = head;
	while (current != NULL)
	{
		execute_test(title, *current, &total_tests, &passed_tests);
		current = current->next;
	}
	return (1);
}