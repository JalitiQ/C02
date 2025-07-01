/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilian <lilian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 23:52:32 by lilian            #+#    #+#             */
/*   Updated: 2025/07/01 10:54:32 by lilian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ret;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ret = 0;
		}
		else
		{
			ret = 1;
			break ;
		}
		i++;
	}
	return (ret);
}

/*int main(void)
{
	ft_str_is_printable("\n\t\v\f");
}
*/