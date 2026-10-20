/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 18:40:26 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 15:55:55 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char *a = "aaab";
	char *b = "aaa";
	printf("res = %i\n", strcmp(a, b));
	printf("res = %i\n", ft_strcmp(a, b));
	return 0;
}
 */