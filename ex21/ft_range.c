/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:14:53 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 16:35:10 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	result = malloc(sizeof(*result) * ((min - max) * -1));
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}

/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int min = 1;
	int max = 5;
	int *result = ft_range(min, max);
	printf("malloc = %i\n", (min - max) * -1);
	printf("dif = %i\n", (min - max) * -1);
	printf("res0 = %i\n", result[0]);
	printf("res1 = %i\n", result[1]);
	while (min < max)
	{
		printf("res = %i\n", *result++);
		min++;
	}
	
	return 0;
} */