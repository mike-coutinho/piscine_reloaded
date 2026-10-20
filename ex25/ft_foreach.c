/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:37:03 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 18:01:57 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + '0');
} */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/* int main(int argc, char const *argv[])
{
	int tab[3] = {1, 2, 3};
	ft_foreach(tab, 3, &ft_putnbr);
	return 0;
}
 */