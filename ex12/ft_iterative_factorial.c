/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:57:22 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 20:12:55 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <limits.h> */
int	ft_iterative_factorial(int nb)
{
	int	nbr;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	nbr = 1;
	while ((nb - 1) != 0)
		nbr += nbr * ((nb--) - 1);
	return (nbr);
}

/* #include <stdio.h>
int main()
{
	printf("res = %i", ft_iterative_factorial(12));

	return 0;
} */