/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:16:30 by ajordan-          #+#    #+#             */
/*   Updated: 2023/03/03 04:45:15 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_tmp(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_three_a(t_stacks *s)
{
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		ft_sa(s, OPT);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s, OPT);
		ft_rra(s, OPT);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ft_ra(s, OPT);
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s, OPT);
		ft_ra(s, OPT);
	}
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		ft_rra(s, OPT);
}

int	ft_sort(t_stacks *stack, int size)
{
	if (ft_check_sorted(stack->a, stack->size_a, ASCENDING) == 0)
	{
		if (size == 2)
			ft_sa(stack, OPT);
		else if (size == 3)
			ft_sort_three_a(stack);
		else
			ft_quicksort_a(stack, size, 0);
	}
	return (0);
}

int	ft_push(t_stacks *stack, int len, int operation)
{
	if (operation == 0)
		ft_pb(stack, OPT);
	else
		ft_pa(stack, OPT);
	len--;
	return (len);
}
