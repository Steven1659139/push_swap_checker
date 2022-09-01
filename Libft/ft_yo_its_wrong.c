/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_yo_its_wrong.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavoie <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:46:31 by slavoie           #+#    #+#             */
/*   Updated: 2022/05/03 15:59:47 by slavoie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	print_valid_move_tab()
{
	printf("Valid move:\n");
	printf(reset);
	printf("swap a, b, both:\n");
	printf(CYAN);
	printf("sa, sb, ss\n");
	printf(reset);
	printf("push a, b:\n");
	printf(CYAN);
	printf("pa, pb\n");
	printf(reset);
	printf("reverse rotate a, b, both:\n");
	printf(CYAN);
	printf("rra, rrb, rrr\n");
	printf(reset);
	printf("rotate a, b, both:\n");
	printf(CYAN);
	printf("ra, rb , rr\n");
}

void	yo_its_wrong(char *str)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd(str, 2);
	print_valid_move_tab();
	ft_putstr_fd(reset, 2);
}

void	print_info()
{
	printf("swap A (sa): inverse les nombres à la première position et à la deuxième position de la stack A.\n");
	printf("swap B (sb): inverse les nombres à la première position et à la deuxième position de la stack A.\n");
	printf("ss : sa et sb en même temps.\n\n");

	printf("push a (pa): Envoie le premier élément de la stack B au sommet de la stack A.\n");
	printf("push b (pb): Envoie le premier élément de la stack A au sommet de la stack B.\n\n");

	printf("rotate A (ra): Décale vers le haut tous les éléments de la stack A et envoie le premier au bas de la stack.\n");
	printf("rotate B (rb): Décale vers le haut tous les éléments de la stack B et envoie le premier au bas de la stack.\n");
	printf("rr : ra et rb en même temps.\n\n");

	printf("reverse rotate A (rra): Décale vers le bas tous les éléments de la stack A et envoie le dernier en haut de la stack.\n");
	printf("reverse rotate b (rrb): Décale vers le bas tous les éléments de la stack B et envoie le premier en haut de la stack.\n");
	printf("rrr : rra et rrb en même temps.\n\n");

	printf("shuffle: réinitialise la liste des nombres avec des nombres aléatoires compris entre 0 et 500.\n\n");

	printf("ctrl + d: quitte le jeu et vous indique si vous avez réussi.\n\n");
}
