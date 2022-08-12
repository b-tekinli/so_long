/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:16:29 by btekinli          #+#    #+#             */
/*   Updated: 2022/01/19 11:15:53 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// file'a c parametresinin çıktısını yazar
// O_CREAT => dosya oluşturur (mevcut değilse)
// O_RDWR => dosyayı hem okuma hem de yazma erişimli açar
// 0777 => bir dosya ya da klasöre okuma, yazma ve çalıştırma yetkisi verir.
/*
#include <fcntl.h>
int main() {
	int fd = open("a.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('b', fd);
}
*/
