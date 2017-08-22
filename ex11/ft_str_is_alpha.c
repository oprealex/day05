/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 17:50:51 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:31:30 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	int i;

	i = 0;
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;
	int k;

	k = 0;
	i = 0;
	if (str[i] != '\0')
	{
		while (str[i])
		{
			if (!is_alpha(str[i]))
			{
				k++;
			}
			i++;
		}
	}
	if (k > 0)
	{
		return (0);
	}
	else
		return (1);
}
