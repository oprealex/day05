/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoprea <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:02:39 by aoprea            #+#    #+#             */
/*   Updated: 2017/08/22 16:12:16 by aoprea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}