/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:31:14 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:58:09 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	basic_test(void)
{
	char	*test;
	int		result;

	test = ft_strdup("Wapiti");
	result = strncmp(test, "Wapiti", 500);
	if (test)
		free(test);
	if (result == 0)
		return (0);
	else
		return (-1);
}
