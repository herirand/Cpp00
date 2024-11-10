/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: herirand <herirand@student.42antananarivo>  #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 07:58:46 by herirand          #+#    #+#             */
/*   Updated: 2024-11-05 07:58:46 by herirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int is_low(int c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}

void    to_upper(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (is_low(str[i]))
            std::cout << (char)(str[i] - 32);
        else
            std::cout << str[i];
        i ++;
    }
}
int main(int ac, char **av)
{
    int i;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else if (ac > 1)
    {
        i = 1;
        while (av[i])
        {
            to_upper(av[i]);
            i ++;
        }
        std::cout << std::endl;
    }
    return (0);
}