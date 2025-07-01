/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 23:47:15 by lilian            #+#    #+#             */
/*   Updated: 2025/07/01 18:51:38 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ret;

	i = 0;
	if (str[i] == '\0')
	{
		ret = 1;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ret = 1;
		}
		else
		{
			ret = 0;
			break ;
		}
		i++;
	}
	return (ret);
}
