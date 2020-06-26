/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 15:55:56 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/26 16:21:27 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int a;
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return(a);
}

char *ft_strdup(char src)
{
	int i;
	char *str;
	i = 0;
	str = (char*)malloc(sizeof(*str)*(ft_strlen(src)+1));
	while(i < ft_strlen(src))
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
