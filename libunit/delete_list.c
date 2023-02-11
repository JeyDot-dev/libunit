/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:53:17 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 14:09:18 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

void	delete_list(t_unit_test **head)
{
	t_unit_test	*tmp;

	while (head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp->t_name);
		free(tmp);
	}
}
