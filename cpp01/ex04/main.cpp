/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/06/21 02:57:21 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    std::cout << argc << std::endl;
    if (argc != 4)
    {
        std::cout << "Error: Invalid arguments." << std::endl;
        return (0);
    }
    std::ifstream   file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: Could not open file." << std::endl;
        return (1);
    }
    ft_sed(file, argv[1], argv[2], argv[3]);
    file.close();
    return (0);
}
