/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_multiple_zero_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:41 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 17:38:52 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	multiple_zero_test(void)
{
	const char	*test = "\0\0\0\0";

	if (ft_strlen(test) == 0)
		return (0);
	else
		return (-1);
}
