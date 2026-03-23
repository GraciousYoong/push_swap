/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:04:55 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/24 02:58:17 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	*fill_buffer(int fd, char *left_char, char *buffer);
static char	*next_line(char *line_buffer);

char	*get_next_line(int fd)
{
	static char	*left_char;
	char		*buffer;
	char		*line;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(left_char);
		free(buffer);
		left_char = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = fill_buffer(fd, left_char, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	left_char = next_line(line);
	return (line);
}

static char	*fill_buffer(int fd, char *left_char, char *buffer)
{
	ssize_t	buffer_read;
	char	*temp;

	buffer_read = 1;
	while (buffer_read > 0)
	{
		buffer_read = read (fd, buffer, BUFFER_SIZE);
		if (buffer_read == -1)
		{
			free(left_char);
			return (NULL);
		}
		else if (buffer_read == 0)
			break ;
		buffer[buffer_read] = '\0';
		if (!left_char)
			left_char = ft_strdup("");
		temp = left_char;
		left_char = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left_char);
}

static char	*next_line(char *line_buffer)
{
	char	*left_char;
	size_t	i;
	size_t	next_line_len;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[i + 1] == 0)
		return (NULL);
	next_line_len = ft_strlen(line_buffer) - i;
	left_char = ft_substr(line_buffer, i + 1, next_line_len);
	if (left_char[0] == '\0')
	{
		free(left_char);
		left_char = NULL;
	}
	line_buffer[i + 1] = '\0';
	return (left_char);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*line;

// 	printf("Type something (Ctrl+D to end):\n");
// 	line = get_next_line(0);
// 	while (line)
// 	{
// 		printf("stdin: %s", line);
// 		free(line);
// 		line = get_next_line(0);
// 	}
// 	return (0);
// }

// // #include <fcntl.h>
// // #include <stdio.h>

// // int	main(int argc, char **argv)
// // {
// // 	int		fd;
// // 	int	i;
// // 	char	*line;

// // 	i = 1;
// // 	if (argc != 2)
// // 	{
// // 		printf("Usage: %s <file>\n", argv[0]);
// // 		return (1);
// // 	}
// // 	fd = open(argv[1], O_RDONLY);
// // 	if (fd < 0)
// // 	{
// // 		perror("open");
// // 		return (1);
// // 	}
// // 	while ((line = get_next_line(fd)) != NULL)
// // 	{
// // 		printf("Line %d: %s", i, line);
// // 		free(line);
// // 		i++;
// // 	}
// // 	close(fd);
// // 	return (0);
// // }