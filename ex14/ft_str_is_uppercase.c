/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:49:56 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:23:55 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;
	int test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_upper(str[i]))
			test++;
		i++;
	}
	if (test > 0)
	{
		return (0);
	}
	else
		return (1);
	return (1);
}
