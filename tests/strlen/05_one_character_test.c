/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_one_character_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:57 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/11 12:46:42 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h";
#include "libft.h";

void	basic_test(void)
{
	const char character = 'c';
	if (ft_strlen(character) == 1)
		return (0);
	else
		return (-1);
}
