/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:07:49 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/19 10:44:21 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	len;

	srclen = ft_strlen(src);
	if (dstsize)
	{
		if (srclen >= dstsize)
			len = dstsize - 1;
		else
			len = srclen;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (srclen);
}
// src'den dst'e kadar kopyalar src'nin uzunluğunu return eder

/*
#include<stdio.h>
int main()
{
    char    a[] = "beyza" ;
    char    b[] = "42";
    printf("%zu\n", ft_strlcpy(a, b, 5));
    printf("%s\n", a);
}
*/
