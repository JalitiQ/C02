/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 23:47:15 by lilian            #+#    #+#             */
/*   Updated: 2025/07/01 19:44:58 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
