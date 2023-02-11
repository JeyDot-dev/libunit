/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_multiple_zero_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsousa-a <jsousa-a@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:44:41 by jsousa-a          #+#    #+#             */
/*   Updated: 2023/02/11 12:44:44 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h";
#include "libft.h";

void	null_test(void)
{
	const char	*test = "\0\0\0\0";
	if (ft_strlen(test) == strlen(test))
		return (0);
	else
		return (-1);
}
