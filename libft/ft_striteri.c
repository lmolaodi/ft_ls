/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:53:46 by lmolaodi          #+#    #+#             */
/*   Updated: 2019/06/20 15:57:32 by lmolaodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (s)
	{
		if (s[i] != '\0' && f)
		{
			while (s[i] != '\0')
			{
				f(i, &s[i]);
				i++;
			}
		}
	}
}
