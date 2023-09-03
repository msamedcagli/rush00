/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcagli <mcagli@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:31:01 by mcagli            #+#    #+#             */
/*   Updated: 2023/09/03 12:03:45 by mcagli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c);

void	ft_print_rows(int a, int b, int sutun, int satir)
{
	if (a == 1)
	{
		if (b == 1)
			ft_put_char('A');
		else if (b == sutun)
			ft_put_char('C');
		else
			ft_put_char('B');
	}
	else if (a == satir)
	{
		if (b == 1)
			ft_put_char('C');
		else if (b == sutun)
			ft_put_char('A');
		else
			ft_put_char('B');
	}
	else
	{
		if (b == 1 || b == sutun) 
			ft_put_char('B');
		else
			ft_put_char(' ');
	}
}

void	rush(int sutun, int satir)
{
	int		a;
	int		b;

	if (sutun < 0 || satir < 0)
	{
		write(1, "No negative numbers!", 21);
		ft_put_char('\n');
		return ;
	}
	a = 1;
	while (a <= satir)
	{
		b = 1;
		while (b <= sutun)
		{
			ft_print_rows(a, b, satir, sutun);
			++b;
		}
		++a;
		ft_put_char('\n');
	}
}
