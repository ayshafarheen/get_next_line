/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarheen <afarheen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:10:47 by afarheen          #+#    #+#             */
/*   Updated: 2022/12/11 12:09:27 by afarheen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t		index;

	index = 0;
	while (s[index] != '\0')
		index++;
	return (index);
}

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		count;

	count = 0;
	copy = (char *)malloc(ft_strlen(src) + 1);
	if (!copy)
		return (0);
	while (src[count] != '\0')
	{
		copy[count] = src[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen((char *)s);
	while (i <= len)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!joined)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		joined[j++] = s1[i++];
	i = 0;
	while (s2[i])
		joined[j++] = s2[i++];
	joined[j] = '\0';
	return (joined);
}
