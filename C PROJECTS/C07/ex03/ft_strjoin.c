/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpandya <tpandya@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:57:47 by tpandya           #+#    #+#             */
/*   Updated: 2025/03/11 17:16:57 by tpandya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_length(int size, char **str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlength(str[i]);
		i++;
	}
	if (size > 1)
		count += (size - 1) * ft_strlength(sep);
	count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*string;

	i = 0;
	total = 0;
	if (size == 0)
	{
		string = (char *)malloc(sizeof(char));
		if (string)
			*string = '\0';
		return (string);
	}
	total = ft_total_length(size, strs, sep);
	string = malloc(sizeof(char) * total);
	if (!string)
		return (NULL);
	while (i < size)
	{
		ft_strcat (string, strs[i]);
		if (i < size - 1)
			ft_strcat (string, sep);
		i++;
	}
	return (string);
}
/*
#include <stdio.h>

int main() {
    // Example strings to join
    char *strs[] = {"Hello", "world", "!"};
    int size = 3; // Number of strings
    char *sep = ","; // Separator (space in this case)

    // Call ft_strjoin with the example data
    char *result = ft_strjoin(size, strs, sep);

    // Print the resulting string
    if (result != NULL) {
        printf("Result: %s\n", result);
        free(result); // Free the allocated memory after use
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
