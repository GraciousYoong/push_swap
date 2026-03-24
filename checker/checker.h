/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyoong <gyoong@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 02:57:02 by gyoong            #+#    #+#             */
/*   Updated: 2026/03/24 15:04:37 by gyoong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# define BUFFER_SIZE 4
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../push_swap/push_swap.h" 

//get_next_line utilities
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif