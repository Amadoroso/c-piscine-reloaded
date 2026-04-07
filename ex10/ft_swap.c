/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:08:42 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/07 18:28:13 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

/* #include <unistd.h>
int	main()
{
	int	c;
	int d;
	char	converter;

	c = 2;
	d = 3;
	ft_swap(&c, &d);

	converter = c + 48;
	write(1, &converter, 1);
	write(1, "\n", 1);

	converter = d + 48;
	write(1, &converter, 1);
} */