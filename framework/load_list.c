/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:26:10 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 14:09:20 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

void	load_test(t_unit_test **head, char *t_name, int (*fn)(void))
{
	t_unit_test	*new_test;
	t_unit_test	*current;

	new_test = malloc(sizeof(t_unit_test));
	new_test->fn = fn;
	new_test->t_name = ft_strdup(t_name);
	new_test->next = NULL;
	if (*head == NULL)
	{
		*head = new_test;
		return ;
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_test;
}
