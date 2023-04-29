/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelgomezgomez <manuelgomezgomez@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:38:01 by manuelgomez       #+#    #+#             */
/*   Updated: 2023/04/29 14:51:53 by manuelgomez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
<<<<<<< HEAD
		if (str[i] == (char)character)
=======
		if (str[i] == c)
>>>>>>> 00dffac1cf00244bb3f64699e5bdc034acb8f228
			return ((char *)str + i);
		i--;
	}
	return (0);
}

/*La función strrchr() en C se utiliza para buscar la última aparición de un 
carácter específico en una cadena de caracteres. */