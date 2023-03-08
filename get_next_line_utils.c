/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:36:11 by marvin            #+#    #+#             */
/*   Updated: 2022/10/26 12:36:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*p;
	int		i;
	int		j;

	if (!stash && !buffer)
		return (0);
	p = malloc(ft_strlen(stash) + (ft_strlen(buffer)) + 1);
	if (!p)
		return (0);
	i = 0;
	j = 0;
	if (stash)
	{
		while (stash[i])
			p[j++] = stash[i++];
		i = 0;
	}
	while (buffer[i])
		p[j++] = buffer[i++];
	p [(ft_strlen(stash) + ft_strlen(buffer))] = '\0';
	free (stash);
	return (p);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
