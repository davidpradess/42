/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:43:12 by dprades           #+#    #+#             */
/*   Updated: 2024/02/03 20:11:34 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count_of_str;
	int	its_a_str;
	int	i;

	i = 0;
	count_of_str = 0; 
	its_a_str = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!its_a_str)
			{
				its_a_str = 1;
				count_of_str++;
			}
		}
		else
			its_a_str = 0;
		i++;
	}
	return (count_of_str);	
}

static void	free_copy_substrs(char **substrs)
{
	int	i;

	if (substrs == NULL)
		return;
	i = 0;
	while (substrs[i] != NULL)
	{
		free(substrs[i]);
		i++;
	}
	free(substrs);
}

static void	copy_substrs(char **substrs, const char *str, char delimiter)
{
	int	i;
	int	j;
	int	start;
	int	substrlen;

	i = 0;
	j = 0;
	while (str[i] != '\0') {
		if (str[i] != delimiter && (i == 0 || str[i - 1] == delimiter)) {
			start = i;
			while (str[i] != '\0' && str[i] != delimiter)
				i++;
			substrlen = i - start;
			substrs[j] = ft_substr(str, (unsigned int) start, substrlen + 1);
			if (substrs[j] == NULL) {
				free_copy_substrs(substrs);
				return;
			}
			j++;
			}
			else {
				i++; //aqui esta el bucle infinito
			}
		}
		substrs[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		num_substr;
	char	**substrs;
	
	num_substr = word_count(s, c);
	substrs = malloc((num_substr + 1) * sizeof(char *));
	if (!substrs)
		return (NULL);

	copy_substrs(substrs, s, c);
	return (substrs);
}

int	main(void)
{
	char	*str = "Hola,como estas,Con split.";
	char	del = ',';
	int		i = 0;
	char	**result = ft_split(str, del);

	if (result != NULL)
	{
		while (result[i] != NULL)
		{	
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);	
}
