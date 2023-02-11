/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:14:56 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/11 15:27:47 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libunit.h"
#include "libft.h"

void	print_list(t_unit_test *head)
{
	while (head != NULL)
	{
		ft_printf("%s\n", head->t_name);
		ft_printf("%p\n", head->fn);
		head = head->next;
	}
}
