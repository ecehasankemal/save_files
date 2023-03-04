/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_quicksort.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:42:52 by hece              #+#    #+#             */
/*   Updated: 2023/03/03 05:59:00 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void
    ft_quicksort_3(t_stacks *stack, int len)
{
    if (len == 3 && stack->size_a == 3)
        ft_sort_three_a(stack);
    else if (len == 2)
    {
        if (stack->a[0] > stack->a[1])
            ft_sa(stack, 0);
    }
    else if (len == 3)
    {
        while (len != 3 || !(stack->a[0] < stack->a[1]
                && stack->a[1] < stack->a[2]))
        {
            if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
                ft_sa(stack, 0);
            else if (len == 3 && !(stack->a[2] > stack->a[0]
                    && stack->a[2] > stack->a[1]))
                len = ft_push(stack, len , 0);
            else if (stack->a[0] > stack->a[1])
                ft_sa(stack, 0);
            else if (len++)
                ft_pa(stack, 0);
        }
    }
}

int
    ft_get_mediane(int *pivot, int *stack, int size)
{
    int *tmp_stack;
    int index;

    tmp_stack = (int *)malloc(size * sizeof(int));
    if (!tmp_stack)
        return (0);
    index = 0;
    while (index < size)
    {
        tmp_stack[index] = stack[index];
        index++;
    }
    ft_sort_tmp(tmp_stack, size);
    *pivot = tmp_stack[size / 2];
    free(tmp_stack);
    return (1);
}

int
    ft_quicksort_a(t_stacks *stack, int len, int cnt)
{
    int pivot;
    int items;

    if (ft_check_sorted(stack->a, len, 0) == 1)
        return (1);
    items = len;
    if (len <= 3)
    {
        ft_quicksort_3(stack, len);
        return (1);
    }
    if (!cnt && !ft_get_mediane(&pivot, stack->a, len))
        return (0);
    while (len != items / 2 + items % 2)
    {
        if (stack->a[0] < pivot && (len--))
            ft_pb(stack, 0);
        else if (++cnt)
            ft_ra(stack, 0);
    }
	while (items / 2 + items % 2 != stack->size_a && cnt--)
		ft_rra(stack, 0);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0)
		&& ft_quicksort_b(stack, items / 2, 0));
    return (1);
}
