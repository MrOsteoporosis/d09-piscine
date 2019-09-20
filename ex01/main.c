/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 09:26:17 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 09:29:54 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour);

int		main(void)
{
	int i = 0;

	while (i < 25)
	{
		ft_takes_place(i);
		printf("\n");
		i++;
	}
}
