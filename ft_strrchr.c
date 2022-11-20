/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:45:54 by maricard          #+#    #+#             */
/*   Updated: 2022/11/20 11:28:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if ((unsigned char)c == '\0')
	{
		return ((char *)&s[ft_strlen(s)]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			a = i;
		i++;
	}
	if (a >= 1)
		return ((char *)&s[a]);
	return (0);
}

/*
int    main()
{
	char			s[] = "ola ola ola ola ola tudo bem";
	unsigned char	c = 'o';

    printf("\nMINHA FUNÇÃO\n");
    printf("\n%s\n", s);
    printf("%s\n", ft_strrchr(s, c));
    printf("\n---------------");
    printf("\n---------------\n");
    printf("\nFUNÇÃO LIVRARIA\n");
    printf("\n%s\n", s);
    printf("%s\n\n", strrchr(s, c));
}
*/
