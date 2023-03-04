/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:00:12 by hece              #+#    #+#             */
/*   Updated: 2023/03/02 12:38:09 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
    ft_quick_sort(t_stack **stack_a, t_stack **stack_b)
{
    int pivot;
    int items;

    if (ft_is_sorted(stack_a) == 1)
        return (1);
    items = ft_stack_size(*stack_a);
    
}

void
    ft_sort_three(t_stack **stack_a)
{
    if (ft_stack_min(*stack_a) == (*stack_a)->nbr)
    {
        ft_rra(stack_a, 0);
        ft_sa(stack_a, 0);
    }
    else if (ft_stack_max(*stack_a) == (*stack_a)->nbr)
    {
        ft_ra(stack_a, 0);
        if (!ft_is_sorted(*stack_a))
            ft_sa(stack_a, 0);
    }
	else
	{
		if (ft_find_index(*stack_a, ft_stack_max(*stack_a)) == 1)
			ft_rra(stack_a, 0);
		else
			ft_sa(stack_a, 0);
	}
}

void
    ft_sort(t_stack **stack_a, t_stack **stack_b)
{
    if (ft_stack_size(*stack_a) == 2)
        ft_sa(stack_a, 0);
    else if (ft_stack_size(*stack_a) == 3)
        ft_sort_three(stack_a);
    else
        ft_quick_sort(stack_a, stack_b);
}
