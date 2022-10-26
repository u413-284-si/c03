/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:35:27 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 15:26:48 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
int strcmp(char *str1, char *str2);

The  strcmp()  function compares the two strings s1 and s2. It returns an
integer less than, equal to, or greater than zero if s1 is found, respectively,
to be less than, to match, or be greater than s2. 

    0 die Strings sind gleich
    >0 das erste ungleiche Zeichen in str1 ist größer als in str2
    <0 das erste ungleiche Zeichen in str1 ist kleiner als in str2

str1 - str2
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] || s2[i]) && diff == 0)
	{
		if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}

// int	main(void)
// {
// 	char	str1[] = "chulu";
// 	char	equal[] = "chulu";
// 	char	greater[] = "cfuly";
// 	char	lesser[] = "chuludfobo";
// 	int	i;

// 	// i = strcmp(str1, equal);
// 	// printf("Equal: %d\n", i);
// 	// i = strcmp(str1, greater);
// 	// printf("Greater: %d\n", i);
// 	// i = strcmp(str1, lesser);
// 	// printf("Lesser: %d\n", i);

// 	i = ft_strcmp(str1, equal);
// 	printf("Equal: %d\n", i);
// 	i = ft_strcmp(str1, greater);
// 	printf("Greater: %d\n", i);
// 	i = ft_strcmp(str1, lesser);
// 	printf("Lesser: %d\n", i);
// 	return (0);
// }
