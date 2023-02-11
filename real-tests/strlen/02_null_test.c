/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:36:19 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 16:33:27 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	null_test(void)
{
	char	name[2];
	int		i;

	i = 1000000;
	if (name[i])
		return (0);
	if (ft_strlen("") == 0)
		return (0);
	else
		return (-1);
}
