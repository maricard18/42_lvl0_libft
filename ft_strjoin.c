/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:06:19 by maricard          #+#    #+#             */
/*   Updated: 2022/11/18 16:53:33 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		a;
	char	*str;

	i = ft_strlen(s1);
	a = ft_strlen(s2);
	str = malloc((a + i + 1) * sizeof(char));
	if (s1 == 0 && s2 == 0)
		return (0);
	i = 0;
	a = 0;
	while (s1[i])
	{
		str[a] = s1[i];
		i++;
		a++;
	}
	i = 0;
	while (s2[i])
	{
		str[a] = s2[i];
		i++;
		a++;
	}
	return (str);
}

/*
int	main()
{
	char	s1[] = "BOAS ";
	char	s2[] = "MALTINHA";

	printf("\n");
	printf("MINHA FUNÇÃO\n");
	printf("---------------\n");
	printf("S1- %s\n", s1);
	printf("S2- %s\n", s2);
	printf("FINAL- %s\n",ft_strjoin(s1, s2));
	printf("---------------\n");
	printf("\n");
}
*/	
