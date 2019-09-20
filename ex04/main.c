/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 10:50:01 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 10:56:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str);

int		main(void)
{
	char str[] = "the best string";

	printf("%s", str);
	printf("%s", ft_rot42(str));
}
