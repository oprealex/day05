/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:32:42 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:42:31 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		destsize;

	i = 0;
	destsize = 0;
	while (dest[destsize])
	{
		while (src[i])
		{
			dest[destsize] = src[i];
			i++;
		}
		destsize++;
		dest[destsize] = '\0';
	}
	return (dest);
}
