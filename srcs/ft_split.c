/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 17:48:38 by tsugimot          #+#    #+#             */
/*   Updated: 2026/05/01 17:58:36 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	word;

	word = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			word++;
		while (*s != c && *s)
			s++;
	}
	return (word);
}

static char	*word_alloc(const char *s, char c)
{
	int		len;
	char	*word;
	char	*head;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	head = word;
	while (len--)
		*word++ = *s++;
	*word = '\0';
	return (head);
}

static char	**word_free(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return (NULL);
	while (split[i])
	{
		free (split[i]);
		i++;
	}
	free (split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	char	**split;
	char	**head;

	word = count_word (s, c);
	split = (char **)malloc(sizeof(char *) * (word + 1));
	if (!split)
		return (word_free (split));
	head = split;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			*split++ = word_alloc(s, c);
			if (!(*split - 1))
				return (word_free(split));
		}
		while (*s != c && *s)
			s++;
	}
	*split = NULL;
	return (head);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s = "**hello***world*hello*";
// 	char	c = '*';
// 	char	**split = ft_split (s, c);
// 	int		n = 0;
// 	while (n < 3)
// 		printf("%s\n", split[n++]);
// 	word_free (split);
// 	return (0);
// }
