/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:39:44 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 20:26:01 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* #include <stdio.h>
int main()
{
	int a = 2;
	int b = 5;
	ft_swap(&a, &b);
	printf("a = %i\n", a);
	printf("b = %i\n", b);
	return 0;
} */