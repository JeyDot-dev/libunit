/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapopor <srapopor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:47:00 by srapopor          #+#    #+#             */
/*   Updated: 2023/02/11 13:18:00 by jsousa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft/libft.h"

t_unit_test	*unit_lstlast(t_unit_test *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
t_unit_test	*unit_lstnew(char *t_name, int (*fn)(void))
{
	t_unit_test	*new;

	new = malloc(sizeof(t_unit_test));
	if (!new)
		return (NULL);
	new->t_name = t_name;
	new->fn = fn;
	new->next = NULL;
	return (new);
}

void	unit_lstadd_back(t_unit_test **lst, t_unit_test *new)
{
	t_unit_test	*temp;

	if (!*lst && new)
		*lst = new;
	else if (lst && new && *lst)
	{
		temp = unit_lstlast(*lst);
		temp->next = new;
	}
}

void	load_test(t_unit_test **head, char *t_name, int (*fn)(void))
{
	unit_lst_add_back(head, lst_new(char *t_name), int (*fn)(void));
}
int	main(void)
{
	ft_printf("hello world\n");
	ft_printf("%s\n", ft_itoa(42));

}
