/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 17:11:12 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/07 18:10:01 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ascii)
{
	write(1, &ascii, 1);
}

void	ft_print_numbers(void)
{
	int		digit;
	char	ascii;

	digit = 0;
	while (digit < 10)
	{
		ascii = digit + 48;
		ft_putchar(ascii);
		digit++;
	}
}

/* int	main()
{
	ft_print_numbers();
	return(0);
} */