/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:44:57 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:49:20 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncat(char *dest, char *stc, int nb)
{
	int		i;
	int		destsize;

	i = 0;
	destsize = 0;
	while (dest[destsize])
	{
		while (i < nb && src[i])
		{
			dest[destsize] = src[i];
			i++;
		}
		destsize++;
	}
	dest[destsize] = '\0';
	return (dest);
}
