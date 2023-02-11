/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_character_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:57 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/11 13:49:13 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h";
#include "libft.h";

int	one_character_test(void)
{
	if (ft_strlen("c") == 1)
		return (0);
	else
		return (-1);
}
