/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 01:28:20 by wini              #+#    #+#             */
/*   Updated: 2026/06/15 03:31:47 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

std::string    ft_str_toupper(std::string str)
{
    int i;
    std::string str_upper;

    i = 0;
    while(str[i])
        str_upper += toupper(str[i++]);
    return (str_upper);
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    i = 1;
    while (i < argc)
    {
        std::string arg = argv[i++];
        std::cout << ft_str_toupper(arg);
        if (argv[i])
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}