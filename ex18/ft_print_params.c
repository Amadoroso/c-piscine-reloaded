/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:07:13 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/09 13:30:19 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}

int	main(int argc, char **argv)
{
	int	arg_count;
	int	inword_count;

	if (argc == 0)
		return (0);
	arg_count = 1;
	while (arg_count < argc)
	{
		inword_count = 0;
		while (*(*(argv + arg_count) + inword_count) != 0)
			ft_putchar(*(*(argv + arg_count) + inword_count++));
		ft_putchar('\n');
		arg_count++;
	}
}
