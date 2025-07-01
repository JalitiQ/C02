/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 21:14:53 by lilian            #+#    #+#             */
/*   Updated: 2025/07/01 18:52:19 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	yes;

	i = 0;
	if (str[i] == '\0')
	{
		printf("oui");
		yes = 1;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			printf("oui");
			yes = 1;
		}
		else
		{
			printf("non");
			yes = 0;
			break ;
		}
		i++;
	}
	return (yes);
}
