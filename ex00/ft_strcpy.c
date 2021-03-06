/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:33:56 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/23 12:38:03 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while(dest[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
int main()
{
	char ex[55] = "hello";
	ft_strcpy(ex, "yes");
	printf("%s", ex);

	return 0;
}
