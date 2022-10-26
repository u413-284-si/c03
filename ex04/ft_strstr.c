/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:25:45 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/08 23:43:05 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*  char *strstr(const char *haystack, const char *needle);
The strstr() function finds the first occurrence of the substring needle
in the string haystack.  The terminating null bytes ('\0') are not compared.
These functions return a pointer to the beginning of the located substring,
or NULL if the substring is not found. If needle is the empty string, the
return value is always haystack itself.
*/

/*
is_same checks if given string <to_find> equals <str> starting from the first
char given (in this case being somewhere inside the original <str>).
*/
int	is_same(char *str, char *to_find)
{
	int	j;
	int	same;

	j = 0;
	same = 1;
	while (to_find[j] && same == 1)
	{
		if (str[j] != to_find[j])
			same = 0;
		j++;
	}
	return (same);
}

/*
is_same receives the adress of the element str[i] (= &str[i]) where the first
equal char is found. If is_same returns true, return that exact adress. 
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{	
		if (str[i] == to_find[0])
		{
			if (is_same(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return ('\0');
}

// int	main(void)
// {
// 	char	str1[100] = "SoyaPikachu";
// 	char	str2[100] = "ka";
// 	char	*ptr;
//
// 	//ptr = strstr(str1, str2);
// 	ptr = ft_strstr(str1, str2);
//  	if (ptr)
//   	{
// 		/* Ptr points to xth Byte in str1
// 		str1 points to 1st Byte in str1
// 		Position = x - 1 (pointer arithmetics)
// 		*/
//     	int length = ptr - str1;
//
//     	printf("String: %s\n", str1);
// 		printf("Pattern: %s\n", str2);
//     	printf( "Pattern gefunden ab dem %d Zeichen\n", length );
//   	}
//   	else 
//	    	puts("Suchmuster nicht gefunden");
// 	return (0);
// }
