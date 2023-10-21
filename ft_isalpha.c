/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:15:54 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 11:35:53 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

// it is equivalent to (isupper(c) ||  islower(c))

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
