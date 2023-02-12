/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_empty_str_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:57 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 16:59:14 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	empty_str_test(void)
{
	char	*test;
	int		result;

	test = ft_strdup("");
	result = strncmp(test, "", 20);
	if (test)
		free(test);
	if (result == 0)
		return (0);
	else
		return (-1);
}
