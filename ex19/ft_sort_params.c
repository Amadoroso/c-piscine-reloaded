/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 13:33:48 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/09 17:16:02 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char character)
{
	write(1, &character, 1);
} */

void	ft_putstr(char **argv, int argc)
{
	int	arg_count;
	int	inword_count;

	arg_count = 1;
	while (arg_count < argc)
	{
		inword_count = 0;
		while ((*(*(argv + arg_count) + inword_count)) != 0)
			ft_putchar(*(*(argv + arg_count) + inword_count++));
		ft_putchar('\n');
		arg_count++;
	}
}

int	ft_strcmp(char *str_one, char *str_two)
{
	while ((*str_one || *str_two) && *str_one == *str_two)
	{
		str_one++;
		str_two++;
	}
	return (*str_one - *str_two);
}

int	main(int argc, char **argv)
{
	char	*holder;
	int		i;

	if (argc == 0)
		return (0);
	else
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				holder = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = holder;
				if (i != 1)
					i--;
			}
			else
				i++;
		}
	}
	ft_putstr(argv, argc);
}
