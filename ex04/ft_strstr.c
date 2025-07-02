/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnofal <mnofal@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:49:39 by mnofal            #+#    #+#             */
/*   Updated: 2025/06/30 19:50:13 by mnofal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*hay;
	char	*needle;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		hay = str;
		needle = to_find;
		while (*hay == *needle && *needle != '\0')
		{
			hay++;
			needle++;
		}
		if (*needle == '\0')
			return (str);
		str++;
	}
	return (0);
}
