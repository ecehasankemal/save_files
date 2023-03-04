/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:48:08 by hece              #+#    #+#             */
/*   Updated: 2023/03/02 16:22:08 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void
    ft_sort_tmp(t_stack **tmp_res_stack, int size)
{
    t_stack *first;
    int     swap;

    first = *tmp_res_stack;
    while ((*tmp_res_stack)->next != NULL)
    {
        if ((*tmp_res_stack)->nbr > (*tmp_res_stack)->next->nbr)
        {
            swap = (*tmp_res_stack)->nbr;
            (*tmp_res_stack)->nbr = (*tmp_res_stack)->next->nbr;
            (*tmp_res_stack)->next->nbr = swap;
            *tmp_res_stack = first;
        }
        else
            *tmp_res_stack = (*tmp_res_stack)->next;
    }
    *tmp_res_stack = first;
}

void
    ft_pivot_caluclate(int *pivot, t_stack *tmp_res_stack)
{
    int size;

    size = ft_stack_size(tmp_res_stack);
    pivot = 
}

int
    ft_get_mediane(int *pivot, t_stack **stack_a, int size)
{
    t_stack *tmp_stack;
    t_stack *pointer_stack;
    t_stack *tmp_res_stack;
    int     iter;

    tmp_stack = (t_stack *)malloc(size * sizeof(t_stack));
    pointer_stack = *stack_a;
    tmp_res_stack = tmp_stack;
    if (!tmp_stack)
        return (0);
    iter = -1;
    while (++iter < size)
    {
        tmp_stack->nbr = pointer_stack->nbr;
        tmp_stack->next;
        pointer_stack->next;
    }
    tmp_stack->next = NULL;
    ft_sort_tmp(&tmp_res_stack, size);
    ft_pivot_calculate(pivot, tmp_res_stack);
    free(tmp_stack);
    return (1);
}
