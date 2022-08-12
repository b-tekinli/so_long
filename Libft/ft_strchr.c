/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:30:51 by btekinli          #+#    #+#             */
/*   Updated: 2022/04/20 14:52:12 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
// s stringinin içinde c yi bulup geri kalan stringi return eder
/*
#include <stdio.h>

int main() {
	const char s[] = "beyza";
	printf("%s", ft_strchr(s, 'z'));
	return 0;
}
*/