/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:09:03 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/05 21:09:05 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./get_next_line/get_next_line.h"
# include "Push_swap.h"
# include <sys/time.h>

void	check_move(t_stacks *container, char **argv, int argc);
void	shuffle(t_stacks *stack);
char	*read_move(int fd);
void	table_flip(char **tab);
void	convert(t_stacks *container, char *argv);
void	convert_sep(t_stacks *container, char **argv);
void	put_move(t_stacks *container, char *move, int print);
void	filter_push(t_stacks *container, char c, int print);
void	filter_swap(t_stacks *container, char c, int print);
void	filter_rotate(t_stacks *container, char c, int print);
void	filter_reverse_rotate(t_stacks *container, char c, int print);



#endif
