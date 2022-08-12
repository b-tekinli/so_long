/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:17:29 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/10 16:41:42 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// ‘s’ stringini verilen file descriptor içerisine yazar.
/*
#include <fcntl.h>

int main() {
	int fd = open("putstr.txt", O_CREAT | O_RDWR, 0777);
	ft_putstr_fd('beyza', fd);
}
*/
