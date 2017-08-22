/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:41:51 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:25:13 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_low(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;
	int test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!is_low(str[i]))
		{
			test++;
		}
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
