/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:17:23 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/09 17:38:17 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*src)
{
	int	i;

	i = 0;
	while (*(src + i))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		index;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	index = 0;
	while (*(src + index) != 0)
	{
		dup[index] = src[index];
		index++;
	}
	return (dup);
}
/* #include <stdio.h>
int	main()
{
	printf("%s",ft_strdup("ola adeus"));
	return (0);
} */