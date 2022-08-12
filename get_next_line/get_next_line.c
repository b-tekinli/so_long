/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:29:38 by btekinli          #+#    #+#             */
/*   Updated: 2022/07/27 14:54:57 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../Libft/libft.h"

char	*ft_get_read(int fd, char *str)
{
	int		count;
	char	*now_str;

	now_str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!now_str)
		return (0);
	count = 1;
	while (! ft_strchr(str, '\n') && count != 0)
	{
		count = read(fd, now_str, BUFFER_SIZE);
		if (count == -1)
		{
			free (now_str);
			return (0);
		}
		now_str[count] = '\0';
		str = ft_strjoin(str, now_str);
	}
	free(now_str);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (0);
	str = ft_get_read(fd, str);
	if (!str)
		return (0);
	line = ft_get_line(str);
	str = ft_get_new_str(str);
	return (line);
}

/*
int main() {
	int fd = open("t1.txt", O_RDONLY);
	char* a;
	// char *b;

	while (a != NULL)
	{
		a = get_next_line(fd);
		printf("%s", a);
		free(a);
		// free(b);
	}
	system("leaks a.out");
	return 0;
}
*/

/*
int main()
{
	int a = open("a.txt", O_RDONLY, 0777);
	char	*str = get_next_line(a);
	int count = 1;

	while (*str)
	{
		if ( count == 3)
		{
			printf("%s", str);
			return (0);
		}
	count += 1;
	str = get_next_line(a);
	free(str);
	}
}
*/

/*int main()
{
	int a = open("a.txt", O_RDONLY, 0777);
	char	*str = get_next_line(a);
	char	**new;
	int count = 1;
	size_t	i = 0;

	new = (char **)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!new)
		return (0);
	while (*str)
	{
		new[i++] = str;
		str = get_next_line(a);
		if (str ==  NULL)
		{
			printf("%s", new[i - 1]);
			return (0);
		}
	}
	free(str);

}*/
