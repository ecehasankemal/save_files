/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hece <hece@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:01:07 by hece              #+#    #+#             */
/*   Updated: 2023/03/01 12:02:23 by hece             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../gnl/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stack
{
	int				nbr;
	struct s_stack	*next;
}				t_stack;

#endif