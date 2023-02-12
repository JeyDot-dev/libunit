	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:36:19 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:12:12 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	null_test(void)
{
	char *test;
	int	result;

	test = ft_strdup("\0");
	result = strncmp(test, "\0", 500);
	if (test)
		free(test);
	if (result == 0)
		return (0);
	else
		return (-1);
}
