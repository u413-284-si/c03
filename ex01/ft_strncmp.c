/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:28:15 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 17:22:40 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
   The  strncmp()  function  is similar, except it compares only the first
   (at most) n bytes of s1 and s2.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	diff = 0;
	while ((s1[i] || s2[i]) && diff == 0 && i < n)
	{
		if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}

// int	main(void)
// {
// 	char		str1[] = "chulu";
// 	char		equal[] = "chulu";
// 	char		greater[] = "cfuly";
// 	char		lesser[] = "chuldfobo";
// 	int		i;
// 	unsigned int	n;

// 	n = 4;
// 	// i = strncmp(str1, equal, n);
// 	// printf("Equal: %d\n", i);
// 	// i = strncmp(str1, greater, n);
// 	// printf("Greater: %d\n", i);
// 	// i = strncmp(str1, lesser, n);
// 	// printf("Lesser: %d\n", i);

// 	i = ft_strncmp(str1, equal, n);
// 	printf("Equal: %d\n", i);
// 	i = ft_strncmp(str1, greater, n);
// 	printf("Greater: %d\n", i);
// 	i = ft_strncmp(str1, lesser, n);
// 	printf("Lesser: %d\n", i);
// 	return (0);
// }
