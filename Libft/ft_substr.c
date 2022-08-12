/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:34:43 by btekinli          #+#    #+#             */
/*   Updated: 2022/02/10 15:22:59 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	buf = (char *)malloc(sizeof(char) * len + 1);
	if (!buf)
		return (0);
	ft_strlcpy(buf, s + start, len + 1);
	return (buf);
}
// Malloc fonksiyonu kullanılarak memoryde hafıza ayırılır
// ve belirtilen substringi döner.
/*
#include <stdio.h>

int	main()
{
	char c[] = "beyza";
	printf("%s", ft_substr(c, 0, 3));
}
*/
