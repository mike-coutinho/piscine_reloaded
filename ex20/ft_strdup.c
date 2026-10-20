/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mifranci <mifranci@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:59:32 by mifranci          #+#    #+#             */
/*   Updated: 2026/04/07 16:14:27 by mifranci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = ft_strlen(src);
	str = malloc(sizeof(*str) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
int main()
{
	char *str = "hello";
	char *strdup = ft_strdup(str);
	printf("str = %p\n", str);
	printf("str = %s\n", str);
	printf("strdup = %p\n", strdup);
	printf("strdup = %s\n", strdup);
	return 0;
}
 */