/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:50:17 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 20:54:56 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int						i;
	unsigned int			destsize;

	i = 0;
	destsize = 0;
	while (dest[destsize])
	{
		while (src[i])
		{
			if (destsize < size - 1)
				dest[destsize] = src[i];
			i++;
			destsize++;
		}
	}
	dest[destsize - 1] = '\0';
	return (destsize);
}
