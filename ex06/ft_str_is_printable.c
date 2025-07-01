/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 23:52:32 by lilian            #+#    #+#             */
/*   Updated: 2025/07/01 10:17:59 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ret;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32 && !(str[i] < 32)) || str[i])
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
	printf("%d", ret);
	return (ret);
}

int main(void)
{
	ft_str_is_printable("\n\t\v\f");
}
