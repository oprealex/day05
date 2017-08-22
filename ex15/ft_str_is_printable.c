/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:00:08 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:32:14 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_print(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;
	int test;

	test = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((!is_print(str[i])))
			test++;
		i++;
	}
	if (test > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (1);
}
