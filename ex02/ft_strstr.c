/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smkiva <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:35:36 by smkiva            #+#    #+#             */
/*   Updated: 2020/06/22 14:19:39 by smkiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	while(str[i] != '\0')
	{
		b = 0;
		while(to_find[b] == str[a + b])
		{
			if( to_find[b + 1] == '\0')
			{
				return (str + a);
			}
		}
		b++;
	}
	a++;
}
int main()
{
	char c;
	char i;

	c = "thando";
	i = "and";
	ft_strstr(c );

	return 0;`
}
