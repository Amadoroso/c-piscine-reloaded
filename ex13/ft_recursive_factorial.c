/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:57:41 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/09 18:57:51 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 12)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main()
{
	printf("%d",ft_recursive_factorial(30));
	return(0);
} */