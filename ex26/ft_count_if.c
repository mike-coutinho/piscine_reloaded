/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:02:20 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 19:19:17 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
int contains_a(char *str)
{
	while (*str)
		if (*str++ == 'a')
			return (1);
	return (0);
} */
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (*tab)
		if (f(*tab++))
			i++;
	return (i);
}

/* int main()
{
	char *array[3] = {"aaa", "bbb"};

	printf("res = %i\n", ft_count_if(array, contains_a));
	return 0;
} */