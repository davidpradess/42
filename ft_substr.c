/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dprades <dprades@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:10:41 by dprades           #+#    #+#             */
/*   Updated: 2024/01/27 17:25:11 by dprades          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s + start);
		p = malloc(ft_strlen(s) - start + 1);
	}
	else
		p = malloc(len + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int main(void)
{
	char const *str = "Hola mundo";
	unsigned int f = 4;
	size_t e = 3;

	printf("%s\n", ft_substr(str, f, e));
	return (0);
}*/
