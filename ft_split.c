/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:45:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 22:45:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = s[len];
	return (word);
}

static void	free_words(char **words, int i)
{
	while (i >= 0)
		free(words[i--]);
	free(words);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		i;

	if (!s || !(words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!(words[i++] = allocate_word(s, c)))
			{
				free_words(words, i - 1);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	words[i] = NULL;
	return (words);
}
