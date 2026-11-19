/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziyad <ziyad@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 21:45:19 by ziyad             #+#    #+#             */
/*   Updated: 2026/11/19 21:57:12 by ziyad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve(char *buf, int n, int idx, char start)
{
	if (idx == n)
	{
		write(1, buf, n);
		if (buf[0] != '0' + (10 - n))
			write(1, ", ", 2);
		return ;
	}
	while (start <= '9')
	{
		buf[idx] = start;
		ft_solve(buf, n, idx + 1, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	if (n > 0 && n < 10)
		ft_solve(buf, n, 0, '0');
}
