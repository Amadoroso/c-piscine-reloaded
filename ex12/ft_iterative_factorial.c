/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 19:03:32 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/10 15:49:44 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial( int nb)
{
	int	factorial;

	if (nb > 12)
		return (0);
	factorial = 1;
	if (nb >= 0)
	{
		while (nb > 0)
			factorial = factorial * nb--;
	}
	else
		return (0);
	return (factorial);
}

/* #include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(-3));
	return (0);
} */