/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_long_str_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:41 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/12 15:11:30 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	long_str_test(void)
{
	const char	*test = "\0\0\0\0";
	if (ft_strlen(test) == strlen(test))
		return (0);
	else
		return (-1);
}
