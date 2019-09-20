/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_generic.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 09:03:43 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 09:16:26 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}

void	ft_generic(void)
{
	ft_putstr("Tut tut ; Tut tut");
}
