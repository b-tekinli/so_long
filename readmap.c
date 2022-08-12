/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btekinli <btekinli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 18:49:00 by btekinli          #+#    #+#             */
/*   Updated: 2022/08/09 22:19:54 by btekinli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_mapsize_control(t_win *win, char *line)
{
	return (((int)ft_strlen(line) - 1 != win->map->wid
			&& line[ft_strlen(line) - 1] == '\n')
		|| (line[ft_strlen(line) - 1] != '\n'
			&& (int)ft_strlen(line) != win->map->wid));
}

void	ft_error(char	*msg)
{
	ft_printf("%s\n", msg);
	ft_printf("Error\n");
	exit(0);
}

void	map_size(char *path, t_win *win)
{
	int		fd;
	char	*line;

	win->map->hei = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_error("Invalid ber");
	line = get_next_line(fd);
	if (line == 0)
		ft_error("Invalid map size");
	win->map->wid = (int)ft_strlen(line)-1;
	while (line)
	{
		if (ft_mapsize_control(win, line))
			ft_error("Invalid map size");
		win->map->hei++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
}

void	read_map(t_win *win, char *path)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
		ft_error("Invalid ber");
	line = get_next_line(fd);
	win->map->_map = ft_calloc(win->map->hei, sizeof(char *));
	while (line)
	{
		win->map->_map[i] = ft_calloc(win->map->wid, 1);
		ft_strlcpy(win->map->_map[i], line, win->map->wid + 1);
		i++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
}
