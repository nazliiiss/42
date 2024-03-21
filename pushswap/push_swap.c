/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:31:18 by nazisken          #+#    #+#             */
/*   Updated: 2023/11/26 04:14:23 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(char **av, int fre)
{
	t_stack			stack;
	int				i;

	i = -1;
	stack.size_a = ft_ps_strlen(av);
	stack.a = malloc(sizeof(int) * stack.size_a);
	if (!stack.a)
		return ;
	stack.b = malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
		ft_error (&stack, av, fre);
	stack.size_b = 0;
	while (++i < stack.size_a)
		stack.a[i] = ft_ps_atoi(av[i], &stack, av, fre);
	ft_check_repeat(stack.size_a, &stack, av, fre);
	ft_sort(&stack, stack.size_a);
	free(stack.a);
	free(stack.b);
}

int	main(int ac, char **av)
{
	int		freesplit;
	int		i;

	i = -1;
	freesplit = 0;
	if (ac > 1)
	{
		av++;
		if (ac == 2)
		{
			freesplit = 1;
			av = ft_split(*av, ' ');
			if (!av)
				return (0);
		}
		ft_push_swap(av, freesplit);
	}
	if (freesplit)
		free_data(av);
}
