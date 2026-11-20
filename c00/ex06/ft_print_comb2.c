/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyad <ziyad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 20:53:06 by ziyad             #+#    #+#             */
/*   Updated: 2026/11/19 21:17:31 by ziyad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_two(int n)
{
	char	c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_two(a);
			write(1, " ", 1);
			ft_put_two(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
