/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wini <wini@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:49:30 by wini              #+#    #+#             */
/*   Updated: 2026/11/07 18:50:57 by wini             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
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
    int occurrences = ft_sed(file, argv[1], argv[2], argv[3]);
    std::cout << "Success" << std::endl;
    std::cout << occurrences << " replacements made" << std::endl;
    std::cout << "file " << argv[1] << ".replace created" << std::endl;
    file.close();
    return (0);
}
