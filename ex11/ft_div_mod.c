/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apinho-a <apinho-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 18:29:14 by apinho-a          #+#    #+#             */
/*   Updated: 2026/04/07 18:56:19 by apinho-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int main()
{
	int *ptr_result;
	int *ptr_remain;
	int	result;
	int	remain;
	int a;
	int b;

	a = 150;
	b = 33;
	result = 0;
	remain = 0;
	
	ptr_result = &result;
	ptr_remain = &remain;
	ft_div_mod(a, b, ptr_result, ptr_remain);
	printf("%d",result);
	printf("%c",'\n');
	printf("%d",remain);
	return (0);
} */