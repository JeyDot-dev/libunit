/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:39:30 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 12:36:04 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

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
	ft_printf("\n%s: %d/%d test passed\n", title, passed_tests, total_tests);
	if (total_tests == passed_tests)
		return (0);
	return (-1);
}
