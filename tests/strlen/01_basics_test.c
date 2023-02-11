/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basics_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:31:14 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 12:36:02 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h";
#include "libft.h";

void	basic_test(void)
{
	if (ft_strlen("hello") == 5)
		return (0);
	else
		return (-1);
}
