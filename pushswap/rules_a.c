/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazisken <nazisken@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:31:38 by nazisken          #+#    #+#             */
/*   Updated: 2023/11/26 04:30:50 by nazisken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sa(t_stack *stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	write(1, "sa\n", 3);
}

void	rra(t_stack *stack)
{
	int	tmp;
	int	index;

	index = stack->size_a;
	tmp = stack->a[index - 1];
	while (--index)
		stack->a[index] = stack->a[index - 1];
	stack->a[index] = tmp;
	write(1, "rra\n", 4);
}

void	ra(t_stack *stack)
{
	int	tmp;
	int	index;

	index = 0;
	tmp = stack->a[index];
	while (++index < stack->size_a)
		stack->a[index - 1] = stack->a[index];
	stack->a[index - 1] = tmp;
	write(1, "ra\n", 3);
}

void	pa(t_stack *stack)
{
	int	index;

	index = stack->size_a++;
	while (--index >= 0)
		stack->a[index + 1] = stack->a[index];
	stack->a[0] = stack->b[0];
	stack->size_b--;
	while (++index < stack->size_b)
		stack->b[index] = stack->b[index + 1];
	write(1, "pa\n", 3);
}
