/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:52:26 by pnona             #+#    #+#             */
/*   Updated: 2021/10/26 19:53:01 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*newstr;
	size_t		slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < len)
		len = slen;
	newstr = malloc(len + 1);
	if (start > slen)
		len = 0;
	if (!newstr)
		return (NULL);
	while (s[start + i] && i < len)
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
