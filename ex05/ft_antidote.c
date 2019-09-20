/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_antidote.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 11:21:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 11:34:28 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i < j && i > k)
		return (i);
	if (i > j && i < k)
		return (i);
	if (j < i && j > k)
		return (j);
	if (j > i && j < k)
		return (j);
	if (k < i && k > j)
		return (k);
	if (k > i && k < j)
		return (k);
	return (0);
}