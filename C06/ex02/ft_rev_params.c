/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wespinoz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:50:37 by wespinoz          #+#    #+#             */
/*   Updated: 2021/08/25 12:20:59 by wespinoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	cont;

	cont = argc - 1;
	while (cont > 0)
	{
		ft_putstr(argv[cont]);
		cont--;
	}
	return (0);
}
