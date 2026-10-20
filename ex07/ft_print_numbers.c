/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:27:19 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 19:07:23 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	nbr;

	nbr = '0';
	while (nbr != ('9' + 1))
		ft_putchar(nbr++);
}
