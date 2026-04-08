/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:01:01 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/08 14:18:17 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	while (sqrt < nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		else
			sqrt++;
	}
	return (0);
}

/* #include <stdio.h>
int	main()
{
	printf("%d",ft_sqrt(45));
	return (0);
} */