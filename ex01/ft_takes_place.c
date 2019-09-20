/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 09:19:56 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 09:33:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_time(int hour)
{
	if (hour == 24 || hour == 0)
		printf("12:00 A.M.");
	else if (hour % 24 < 12)
		printf("%d:00 A.M.", hour % 24);
	else if (hour == 12)
		printf("12:00 P.M.");
	else
		printf("%d:00 P.M.", hour % 12);
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_print_time(hour);
	printf(" AND ");
	ft_print_time(hour + 1);
}
