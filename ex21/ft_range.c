/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:39:50 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/10 13:36:20 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*array;
	int	index;

	if (min >= max)
		return (NULL);
	range = max - min;
	array = malloc (sizeof(int) * range);
	index = 0;
	while (min < max)
		*(array + index++) = min++;
	return (array);
}
/* #include <stdio.h>
int	main()
{
	int	min;
	int	max;
	int index;
	int	min_holder;
	
	min = 50;
	max = 49;
	index = 0;
	min_holder = min;
	while(min_holder < max)
	{
		printf("%d",*(ft_range(min, max) + index++));
		printf(" ");
		min_holder++;
	}
	return (0);
} */