/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rot42.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/20 10:42:31 by averheij       #+#    #+#                */
/*   Updated: 2019/09/20 10:57:56 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		rot;

	i = 0;
	rot = 42;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'a' + ((str[i] - 'a' + rot) % 26);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + ((str[i] - 'A' + rot) % 26);
		i++;
	}
	return (str);
}
