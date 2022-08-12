/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:39:47 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/10 10:58:56 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s1) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char *) ft_memcpy(new, s1, len));
}
// yeni bir dizin açıp onun uzunluğu kadar mallocla yer ayırıp oraya kopyalar
/*
#include <stdio.h>
int	main()
{
	char c[] = "beyza";
	printf("%s", ft_strdup(c));
}
*/
