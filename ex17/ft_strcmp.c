/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 18:44:08 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/08 19:04:49 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
			return (0);
		else if (*s1 < *s2)
			return (*s1 - *s2);
		else
			return (*s1 + *s2);
		s1++;
		s2++;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	printf("%d",ft_strcmp("ola","adeus"));
	return (0);
} */