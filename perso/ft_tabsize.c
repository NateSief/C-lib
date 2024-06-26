/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nate <nate@student.42.fr>                  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-04-08 08:53:52 by nate              #+#    #+#             */
/*   Updated: 2024-04-08 08:53:52 by nate             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/perso.h"

int	ft_tabsize(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
        i++;
    return (i);
}