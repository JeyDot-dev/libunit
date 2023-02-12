/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_one_char_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:37:27 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:12:40 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libunit.h"
#include "libft.h"

int	one_char_test(void)
{
	char *test;
	int	result;

	test = ft_strdup("W");
	result = strncmp(test, "W", 500);
	if (test)
		free(test);
	if (result == 0)
		return (0);
	else
		return (-1);
}
