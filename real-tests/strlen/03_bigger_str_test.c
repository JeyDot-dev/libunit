/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:37:27 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/12 17:03:28 by srapopor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int	bigger_str_test(void)
{
	static const char	txt[] = "This is a longer text";

	if (ft_strlen(txt) == strlen(txt))
		return (0);
	else
		return (-1);
}
