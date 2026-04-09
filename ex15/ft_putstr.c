/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:24:54 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/09 17:58:23 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
}
 */
void	ft_putchar(char letter);

void	ft_putstr(char *str)
{
	char	**ptr;
	int		index;

	ptr = &str;
	index = 0;
	while (*(ptr + index) != 0)
		ft_putchar(*(*ptr + index++));
}

/* int	main()
{
	char *string;

	string = "ola adeus";
	ft_putstr(string);
	return (0);
} */