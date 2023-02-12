/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_only_spaces_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:31:14 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 16:04:12 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	only_spaces_test(void)
{
	if (ft_atoi("         ") == 0)
		return (0);
	else
		return (-1);
}
