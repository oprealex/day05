/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 19:34:31 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:28:20 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int		i;
	int		test;

	test = 0;
	i = 0;
	while (str[i] != '0')
	{
		while (str[i])
		{
			if (!(is_num(str[i])))
				test++;
			i++;
		}
	}
	if (test > 0)
	{
		return (0);
	}
	else
		return (1);
}
